# ZW111 Biometric Sensor Library

[🇧🇷 Português](#portugues) | [uSD English](#english) | [🇷🇺 Русский](#russian) | [🇩🇪 Deutsch](#german) | [🇨🇳 中文](#chinese)

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

### Documentação
A pasta `extras/` deste repositório contém a documentação técnica oficial e datasheets do sensor ZW111. Consulte-a para detalhes profundos sobre os comandos e registros.

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

### Sobre o arquivo library.properties
Este projeto inclui um arquivo `library.properties` no padrão Arduino 1.5. Isso significa que:
- A Arduino IDE reconhece automaticamente os metadados da biblioteca (nome, versão, autor).
- Permite que a biblioteca apareça corretamente no **Gerenciador de Bibliotecas**, com links e descrições formatadas.
- Organiza a estrutura interna, separando o código-fonte (`src/`) dos exemplos (`examples/`).

#### Como verificar (Passo a Passo):
1. Copie a pasta da biblioteca para `Documents/Arduino/libraries`.
2. Reinicie a Arduino IDE.
3. Vá em **Sketch > Incluir Biblioteca > Gerenciar Bibliotecas...**
4. Na barra de busca, digite "ZW111".
5. Você verá a biblioteca listada com o autor "Antigravity, Google Deepmind" e a versão "1.0.0".
6. Se houver atualizações futuras, a IDE avisará aqui.

### Autoria
Este projeto foi desenvolvido com a assistência da **Antigravity**, uma IA de codificação avançada criada pelo **Google Deepmind**.

> **⚠️ AVISO**: Este código foi gerado por uma máquina. **Não adianta fazer perguntas ou abrir Issues**, pois elas não serão respondidas. Este é um repositório de código gerado automaticamente.

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

### Documentation
The `extras/` folder in this repository contains the official technical documentation and datasheets for the ZW111 sensor. Refer to it for deep details on commands and registers.

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

### About library.properties
This project includes a `library.properties` file following the Arduino 1.5 standard. This means:
- The Arduino IDE automatically recognizes library metadata (name, version, author).
- Allows the library to appear correctly in the **Library Manager** with formatted links and descriptions.
- Organizes the internal structure, separating source code (`src/`) from examples (`examples/`).

#### How to Verify (Step-by-Step):
1. Copy the library folder to `Documents/Arduino/libraries`.
2. Restart the Arduino IDE.
3. Go to **Sketch > Include Library > Manage Libraries...**
4. In the search bar, type "ZW111".
5. You will see the library listed with author "Antigravity, Google Deepmind" and version "1.0.0".
6. If there are future updates, the IDE will notify you here.

### Credits
This project was developed with the assistance of **Antigravity**, an advanced coding AI created by **Google Deepmind**.

> **⚠️ NOTICE**: This code was generated by a machine. **Do not ask questions or open Issues**, as they will not be answered. This is an automatically generated code repository.

---

<a name="russian"></a>
## 🇷🇺 Русский

### О проекте
Библиотека для управления емкостным биометрическим датчиком **ZW111** (H-Link) с использованием ESP32 или Arduino. Проект структурирован как **Стандартная библиотека Arduino**, что упрощает установку.

### Функции
- **Регистрация (Enroll)**: Полная процедура регистрации новых отпечатков пальцев.
- **Идентификация (Identify)**: Быстрое распознавание зарегистрированных отпечатков.
- **Управление LED**: Специальные функции для кольцевой RGB-подсветки.
- **Оптимизированный протокол**: Эффективная последовательная связь.

### Документация
Папка `extras/` в этом репозитории содержит официальную техническую документацию и даташиты для датчика ZW111. Обратитесь к ней для получения подробной информации о командах и регистрах.

### Установка

#### Вариант 1: Arduino IDE (Ручная установка)
1. Скачайте этот проект (ZIP) или клонируйте репозиторий.
2. Скопируйте папку `ZW111-Biometric-Lib` в папку библиотек Arduino (`Документы/Arduino/libraries`).
3. Откройте Arduino IDE и перейдите: **Файл > Примеры > ZW111 Biometric Lib > ZW111_Basic**.
4. Загрузите пример на вашу плату.

#### Вариант 2: PlatformIO
Библиотека уже настроена для разработки.
1. Откройте папку в VS Code.
2. Файл `platformio.ini` уже указывает на пример в `examples/ZW111_Basic`.
3. Используйте кнопку **Build/Upload** как обычно.

### О файле library.properties
Этот проект включает файл `library.properties` согласно стандарту Arduino 1.5. Это означает:
- Arduino IDE автоматически распознает метаданные библиотеки (имя, версия, автор).
- Позволяет библиотеке правильно отображаться в **Менеджере библиотек** с отформатированными ссылками и описаниями.
- Организует внутреннюю структуру, разделяя исходный код (`src/`) и примеры (`examples/`).

### Авторство
Этот проект был разработан при содействии **Antigravity**, продвинутого ИИ для кодирования, созданного **Google Deepmind**.

> **⚠️ ВНИМАНИЕ**: Этот код был сгенерирован машиной. **Не задавайте вопросы и не открывайте Issues**, так как ответов на них не будет. Это автоматически сгенерированный репозиторий кода.

---

<a name="german"></a>
## 🇩🇪 Deutsch

### Über das Projekt
Bibliothek zur Steuerung des kapazitiven Fingerabdrucksensors **ZW111** (H-Link) mit ESP32 oder Arduino. Das Projekt ist als **Standard-Arduino-Bibliothek** strukturiert, was die Installation erleichtert.

### Funktionen
- **Registrierung (Enroll)**: Komplette Routine zum Registrieren neuer Fingerabdrücke.
- **Identifikation (Identify)**: Schnelle Erkennung registrierter Fingerabdrücke.
- **LED-Steuerung**: Dedizierte Funktionen für den RGB-LED-Ring.
- **Optimiertes Protokoll**: Effiziente serielle Kommunikation.

### Dokumentation
Der Ordner `extras/` in diesem Repository enthält die offizielle technische Dokumentation und Datenblätter für den Sensor ZW111. Siehe dort für Details zu Befehlen und Registern.

### Installation

#### Option 1: Arduino IDE (Manuelle Installation)
1. Laden Sie dieses Projekt (ZIP) herunter oder klonen Sie das Repository.
2. Kopieren Sie den Ordner `ZW111-Biometric-Lib` in Ihren Arduino-Bibliotheksordner (`Dokumente/Arduino/libraries`).
3. Öffnen Sie die Arduino IDE und gehen Sie zu: **Datei > Beispiele > ZW111 Biometric Lib > ZW111_Basic**.
4. Laden Sie das Beispiel auf Ihr Board hoch.

#### Option 2: PlatformIO
Die Bibliothek ist bereits für die Entwicklung konfiguriert.
1. Öffnen Sie den Ordner in VS Code.
2. Die Datei `platformio.ini` verweist bereits auf das Beispiel in `examples/ZW111_Basic`.
3. Verwenden Sie die Schaltfläche **Build/Upload** wie gewohnt.

### Über library.properties
Dieses Projekt enthält eine Datei `library.properties` nach dem Arduino 1.5 Standard. Das bedeutet:
- Die Arduino IDE erkennt automatisch Bibliotheks-Metadaten (Name, Version, Autor).
- Ermöglicht die korrekte Anzeige der Bibliothek im **Bibliotheksverwalter** mit formatierten Links und Beschreibungen.
- Organisiert die interne Struktur und trennt Quellcode (`src/`) von Beispielen (`examples/`).

### Credits
Dieses Projekt wurde mit Unterstützung von **Antigravity** entwickelt, einer fortgeschrittenen Coding-KI von **Google Deepmind**.

> **⚠️ HINWEIS**: Dieser Code wurde von einer Maschine generiert. **Stellen Sie keine Fragen und eröffnen Sie keine Issues**, da diese nicht beantwortet werden. Dies ist ein automatisch generiertes Code-Repository.

---

<a name="chinese"></a>
## 🇨🇳 中文

### 关于本项目
用于使用 ESP32 或 Arduino 控制 **ZW111** (H-Link) 电容式指纹传感器的库。本项目采用了 **标准 Arduino 库** 结构，便于安装。

### 功能特点
- **注册 (Enroll)**: 注册新指纹的完整流程。
- **识别 (Identify)**: 快速识别已注册的指纹。
- **LED 控制**: 专用于 RGB LED 环的控制函数。
- **优化协议**: 高效的串口通信。

### 文档
本仓库中的 `extras/` 文件夹包含了 ZW111 传感器的官方技术文档和数据手册。有关命令和寄存器的详细信息，请参阅该文件夹。

### 安装

#### 选项 1: Arduino IDE (手动安装)
1. 下载本项目 (ZIP) 或克隆仓库。
2. 将 `ZW111-Biometric-Lib` 文件夹复制到您的 Arduino 库文件夹 (`文档/Arduino/libraries`)。
3. 打开 Arduino IDE 并前往: **文件 > 示例 > ZW111 Biometric Lib > ZW111_Basic**。
4. 将示例上传到您的开发板。

#### 选项 2: PlatformIO
该库已配置好用于开发。
1. 在 VS Code 中打开文件夹。
2. `platformio.ini` 文件已指向 `examples/ZW111_Basic` 中的示例。
3. 照常使用 **Build/Upload** 按钮。

### 关于 library.properties
本项目包含符合 Arduino 1.5 标准的 `library.properties` 文件。这意味着：
- Arduino IDE 会自动识别库的元数据（名称、版本、作者）。
- 允许库在 **库管理器** 中正确显示，并带有格式化的链接和描述。
- 组织内部结构，将源代码 (`src/`) 与示例 (`examples/`) 分开。

### 致谢
本项目是在 **Antigravity** 的协助下开发的，这是由 **Google Deepmind** 创建的高级编码 AI。

> **⚠️ 注意**: 此代码由机器生成。**请勿提问或开启 Issues**，因为它们将不会得到回复。这是一个自动生成的代码仓库。
