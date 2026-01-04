# ZW111 Biometric Sensor Library / Biblioteca Sensor Biométrico ZW111

[English Version below](#english) | [Versão em Português abaixo](#portugues)

---

<a name="portugues"></a>
## 🇧🇷 Português

### Sobre o Projeto
Biblioteca para controlar o sensor de biometria capacitivo **ZW111** (H-Link) utilizando ESP32 ou Arduino. O código foi estruturado como uma **Biblioteca Arduino Padrão**, facilitando a instalação.

### Funcionalidades
- **Cadastro (Enroll)**: Rotina completa para cadastrar novas impressões digitais.
- **Identificação (Identify)**: Reconhecimento rápido de digitais cadastradas.
- **Controle de LED**: Funções dedicadas para o anel de LED RGB.
- **Protocolo Otimizado**: Comunicação serial eficiente.

### Instalação

#### Opção 1: Arduino IDE (Instalação Manual)
1. Baixe este projeto (ZIP) ou clone o repositório.
2. Copie a pasta `ZW111-Biometric-Lib` para a pasta de bibliotecas do Arduino (`Documentos/Arduino/libraries`).
3. Abra a Arduino IDE e vá em: **Arquivo > Exemplos > ZW111 Biometric Lib > ZW111_Basic**.
4. Carregue o exemplo para sua placa.

#### Opção 2: PlatformIO
A biblioteca já está configurada para desenvolvimento.
1. Abra a pasta no VS Code.
2. O arquivo `platformio.ini` já aponta para o exemplo em `examples/ZW111_Basic`.
3. Use o botão **Build/Upload** normalmente.

### Autoria
Este projeto foi desenvolvido com a assistência da **Antigravity**, uma IA de codificação avançada criada pelo **Google Deepmind**.

---

<a name="english"></a>
## 🇺🇸 English

### About the Project
Library to control the **ZW111** capacitive biometric sensor (H-Link) using ESP32 or Arduino. The project is structured as a **Standard Arduino Library**, making installation easy.

### Features
- **Enroll**: Complete routine to register new fingerprints.
- **Identify**: Fast fingerprint recognition.
- **LED Control**: Dedicated functions for the RGB LED ring.
- **Optimized Protocol**: Efficient serial communication.

### Installation

#### Option 1: Arduino IDE (Manual Install)
1. Download this project (ZIP) or clone the repository.
2. Copy the `ZW111-Biometric-Lib` folder to your Arduino libraries folder (`Documents/Arduino/libraries`).
3. Open Arduino IDE and go to: **File > Examples > ZW111 Biometric Lib > ZW111_Basic**.
4. Upload the example to your board.

#### Option 2: PlatformIO
The library is already configured for development.
1. Open the folder in VS Code.
2. The `platformio.ini` file points to the example in `examples/ZW111_Basic`.
3. Use **Build/Upload** as usual.

### Credits
This project was developed with the assistance of **Antigravity**, an advanced coding AI created by **Google Deepmind**.
