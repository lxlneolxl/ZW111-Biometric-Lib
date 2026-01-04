# ZW111 Biometric Sensor Library / Biblioteca Sensor Biométrico ZW111

[English Version below](#english) | [Versão em Português abaixo](#portugues)

---

<a name="portugues"></a>
## 🇧🇷 Português

### Sobre o Projeto
Este repositório contém o código fonte e biblioteca para controlar o sensor de biometria capacitivo **ZW111** (H-Link) utilizando ESP32 ou Arduino. O projeto foi desenvolvido para oferecer fácil integração e controle total das funções do sensor.

**Destaque**: O código está preparado para ser compilado tanto no **PlatformIO (VS Code)** quanto na **Arduino IDE**, sem necessidade de alterações manuais.

### Funcionalidades
- **Cadastro (Enroll)**: Rotina completa para cadastrar novas impressões digitais, salvando-as nos IDs de memória do sensor (suporta até 127 IDs dependendo do modelo).
- **Identificação (Identify)**: Reconhecimento rápido de digitais cadastradas com retorno do ID e nível de confiança.
- **Controle de LED**: Funções dedicadas para controlar o anel de LED RGB do sensor (modos de respiração, piscar, cores estáticas).
- **Protocolo Otimizado**: Implementação da comunicação serial seguindo o datasheet do ZW111/R307.

### Configuração de Hardware (ESP32)
| Pino Sensor ZW111 | Pino ESP32 (Padrão) | Função |
| :--- | :--- | :--- |
| **VCC** | 3.3V / 5V | Alimentação |
| **GND** | GND | Terra |
| **TX** | GPIO 16 (RX2) | Serial RX do ESP32 |
| **RX** | GPIO 17 (TX2) | Serial TX do ESP32 |
| **TOUCH (WAKE)** | GPIO 4 | Detecção de toque |

### Como Compilar

#### Opção 1: PlatformIO (Recomendado)
1. Abra a pasta deste projeto no **VS Code**.
2. O PlatformIO detectará automaticamente o arquivo `platformio.ini`.
3. Clique em **Build** ou **Upload**.

#### Opção 2: Arduino IDE
1. Abra o arquivo `ZW111funcionando.ino` dentro da pasta do projeto.
2. A IDE carregará automaticamente o código principal (`main.cpp`) e a biblioteca.
3. Selecione sua placa (ex: ESP32 Dev Module) e clique em **Carregar**.

### Autoria
Este projeto foi desenvolvido com a assistência da **Antigravity**, uma IA de codificação avançada criada pelo **Google Deepmind**.

---

<a name="english"></a>
## 🇺🇸 English

### About the Project
This repository contains the source code and library to control the **ZW111** capacitive biometric sensor (H-Link) using an ESP32 or Arduino. The project is designed for easy integration and full control of the sensor's features.

**Highlight**: The code is ready to compile in both **PlatformIO (VS Code)** and **Arduino IDE** without manual changes.

### Features
- **Enroll**: Complete routine to register new fingerprints, saving them to the sensor's memory IDs.
- **Identify**: Fast recognition of registered fingerprints with ID and confidence level return.
- **LED Control**: Dedicated functions to control the sensor's RGB LED ring (breathing, flashing, always on modes).
- **Optimized Protocol**: Serial communication implementation following the ZW111/R307 datasheet.

### Hardware Setup (ESP32)
| ZW111 Sensor Pin | ESP32 Pin (Default) | Function |
| :--- | :--- | :--- |
| **VCC** | 3.3V / 5V | Power |
| **GND** | GND | Ground |
| **TX** | GPIO 16 (RX2) | ESP32 Serial RX |
| **RX** | GPIO 17 (TX2) | ESP32 Serial TX |
| **TOUCH (WAKE)** | GPIO 4 | Touch Detection |

### How to Compile

#### Option 1: PlatformIO (Recommended)
1. Open this project folder in **VS Code**.
2. PlatformIO will automatically detect the `platformio.ini` file.
3. Click **Build** or **Upload**.

#### Option 2: Arduino IDE
1. Open the `ZW111funcionando.ino` file located in the project folder.
2. The IDE will automatically load the main code (`main.cpp`) and the library.
3. Select your board (e.g., ESP32 Dev Module) and click **Upload**.

### Credits
This project was developed with the assistance of **Antigravity**, an advanced coding AI created by **Google Deepmind**.
