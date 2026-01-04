#include <Arduino.h>
#include <ZW111.h> // Biblioteca ZW111


/* -------------------- CONFIGURAÇÃO -------------------- */
#define TOUCH_PIN 4             // pino que lê o toque do sensor
#define RX2_PIN 16              // ESP32 RX  → Sensor TX
#define TX2_PIN 17              // ESP32 TX  → Sensor RX
HardwareSerial fingerSerial(2); // UART2 (RX2/TX2)
/* -------------------- INSTÂNCIA DA BIBLIOTECA -------------------- */
ZW111 finger(&fingerSerial); // cria objeto que controla o sensor

/* -------------------- PROTOTIPOS DE FUNÇÕES -------------------- */
void ledTest();
bool enrollID(uint16_t id);
int identifyFinger();

/* -------------------- FUNÇÕES AUXILIARES -------------------- */
/* Testa o LED em três cores (azul → verde → vermelho) */
void ledTest() {
  finger.ledControl(1, 0, LED_BLUE, 3); // breathing azul
  delay(500);
  finger.ledControl(1, 0, LED_GREEN, 3); // breathing verde
  delay(500);
  finger.ledControl(1, 0, LED_RED, 3); // breathing vermelho
  delay(500);
}
/* Enrola um ID (1‑127). Retorna true se tudo OK. */
bool enrollID(uint16_t id) {
  Serial.printf("\n>>> ENROLANDO %s (ID %u)\n",
                (id == 1   ? "DEDO 1"
                 : id == 2 ? "DEDO 2"
                           : "DEDO 3"),
                id);
  // 1️⃣ Captura primeira imagem
  while (finger.getImage() != ZW111_OK) {
  }
  Serial.println("  Imagem 1 capturada");
  finger.image2Tz(1); // armazena no buffer 1
  // 2️⃣ Retira o dedo
  Serial.println("  Remova o dedo");
  while (finger.getImage() == ZW111_OK) {
  } // espera o dedo sair
  delay(500);
  // 3️⃣ Captura segunda imagem
  while (finger.getImage() != ZW111_OK) {
  }
  Serial.println("  Imagem 2 capturada");
  finger.image2Tz(2); // armazena no buffer 2
  // 4️⃣ Cria modelo a partir dos dois buffers
  if (finger.createModel() != ZW111_OK) {
    Serial.println("  Falha ao criar modelo");
    return false;
  }
  Serial.println("  Modelo criado");
  // 5️⃣ Armazena modelo no ID solicitado
  if (finger.storeModel(id) != ZW111_OK) {
    Serial.println("  Falha ao salvar modelo");
    return false;
  }
  Serial.println("  Modelo salvo com sucesso");
  return true;
}
/* Identifica o dedo colocado (retorna ID ou -1). */
int identifyFinger() {
  // Captura imagem
  while (finger.getImage() != ZW111_OK) {
  }
  // Converte para buffer 1 (necessário para busca)
  finger.image2Tz(1);
  // Busca no banco
  if (finger.fingerSearch() == ZW111_OK) {
    return finger.fingerID; // ID encontrado
  }
  return -1; // não reconhecido
}
/* -------------------- SETUP -------------------- */
void setup() {
  Serial.begin(115200);
  while (!Serial)
    ; // aguarda abertura do monitor
  // Inicializa UART2 (57600 bps) e a classe ZW111
  fingerSerial.begin(57600, SERIAL_8N1, RX2_PIN, TX2_PIN);
  finger.begin(57600);
  pinMode(TOUCH_PIN, INPUT);
  Serial.println("\n=== TESTE ZW111 (classe ZW111) ===");
  /* ----- Handshake / verificação de senha ----- */
  // Primeiro tenta o comando de handshake (0x40). Se falhar, usa
  // verifyPassword().
  if (!finger.handshake()) {
    Serial.println("⚠️ Handshake falhou – tentando verifyPassword...");
    if (!finger.verifyPassword()) {
      Serial.println("❌ Sensor não encontrado! Verifique fios/VCC/GND.");
      while (1)
        delay(1); // trava aqui
    }
  } else {
    Serial.println("✅ Handshake OK – sensor acordado");
    // Opcional: ainda verifica a senha padrão
    if (!finger.verifyPassword()) {
      Serial.println("⚠️ Senha padrão não aceita – pode estar alterada.");
    }
  }
  /* ----- Teste rápido de LED (confirma comando 0x35) ----- */
  ledTest();
  /* ----- Enrolamento dos três IDs ----- */
  for (uint16_t id = 1; id <= 3; ++id) {
    if (!enrollID(id)) {
      Serial.printf("❌ Falha no enrolamento do ID %u\n", id);
    } else {
      Serial.printf("✅ ID %u cadastrado\n", id);
    }
    delay(1000);
  }
  Serial.println("\n=== CADASTRO FINALIZADO ===");
  Serial.println("Toque no sensor (GPIO4) para identificar");
}
/* -------------------- LOOP -------------------- */
void loop() {
  // Detecta toque no pino configurado
  if (digitalRead(TOUCH_PIN) == HIGH) {
    Serial.println("\nDedo detectado... lendo");
    finger.ledControl(1, 0, LED_BLUE, 3); // LED azul enquanto lê
    int id = identifyFinger();
    if (id > 0) {
      Serial.printf(">> %s reconhecido (ID %d)\n",
                    (id == 1   ? "DEDO 1"
                     : id == 2 ? "DEDO 2"
                               : "DEDO 3"),
                    id);
      finger.ledControl(1, 0, LED_GREEN, 3); // LED verde sucesso
    } else {
      Serial.println(">> Dedo não reconhecido");
      finger.ledControl(1, 0, LED_RED, 3); // LED vermelho falha
    }
    // Aguarda o dedo ser retirado para evitar leituras múltiplas
    while (digitalRead(TOUCH_PIN) == HIGH) {
    }
    delay(1500); // debounce
  }
}