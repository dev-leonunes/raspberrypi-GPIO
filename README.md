# Controle-de-Pinos-GPIO

Este projeto é um exemplo de controle de pinos GPIO utilizando o Raspberry Pi Pico. Ele inclui funcionalidades para acender LEDs, ler um teclado matricial e controlar um buzzer.

## Descrição do Projeto
Tarefa 01 do Capítulo 04 do Embarcatech-CEPEDI

O código consiste em acertar o valor correto da senha variando de 0 a 9, fazendo a leitura de um teclado matricial 4x4. 
Os leds serão acesos indicando se o valor foi alto ou baixo, ou se acertou. 
Um sinal sonoro reforçará o comando de acordo com o resultado.
Haverão 4 senhas distintas de A até D. O usuário escolhe previamente.

## Funcionalidades

- Acender LEDs para indicar se o valor da senha foi alto ou baixo.
- Emitir um sinal sonoro para reforçar o comando de acordo com o resultado.
- Ler entradas de um teclado matricial 4x4.
- Suporte para 4 senhas distintas (A até D).

## Demonstração

[Assista ao vídeo da demonstração](https://www.dropbox.com/scl/fi/pohecsqnmpj6tx3l07mn6/Tarefa-01.mp4?rlkey=wsss256kbjnwk9jlh6h9uuynx&st=yoypk9qh&dl=0)

## Pré-requisitos

1. **Instalar o SDK do Raspberry Pi Pico**:
   - Siga as instruções no [site oficial](https://github.com/raspberrypi/pico-sdk) para instalar o SDK do Raspberry Pi Pico.

2. **Instalar o CMake**:
   - Baixe e instale o CMake a partir do [site oficial](https://cmake.org/download/).

3. **Instalar o Ninja**:
   - Baixe e instale o Ninja a partir do [site oficial](https://ninja-build.org/).

## Instalação

1. **Clone o repositório**:
   ```sh
   git clone https://github.com/seu-usuario/Controle-de-pinos-GPIO.git
   cd Controle-de-pinos-GPIO
   ```

2. **Configurar o ambiente no Visual Studio Code**:
    - Abra o Visual Studio Code no diretório do projeto.
    - Certifique-se de que as configurações no arquivo `settings.json` estão corretas e apontam para os caminhos corretos do SDK, CMake, Ninja, etc.

## Como utilizar

1. **Compilar o projeto**:
    - No Visual Studio Code, abra a extenção Raspberry Pi Pico Project, procure e selecione a função `Compile Project`.

2. **Execute o projeto**:
    - Retorne aos arquivos do projeto, abra o arquivo `diagram.json`, clique no botão verde `Start the simulation`.

3. **Utilize o teclado matricial no simulador `Wokwi` para interagir com os LEDs e buzzer conforme programado.**

## Estrutura do Projeto

- `.vscode`: Diretório contendo configurações do Visual Studio Code.
- `build`: Diretório onde os arquivos compilados serão gerados.
- `CMakeLists.txt`: Arquivo de configuração do CMake para o projeto.
- `ControleGPIO.c`: Código fonte principal do projeto.
- `diagram.json`: Diagrama de conexões dos componentes.
- `pico_sdk_import.cmake`: Arquivo de importação do SDK do Raspberry Pi Pico.
- `wokwi.toml`: Arquivo de configuração para simulação no Wokwi.

## Contribuição

1. Faça um fork do projeto.
2. Crie uma branch para sua feature (git checkout -b feature/nova-feature).
3. Commit suas mudanças (git commit -m 'Adiciona nova feature').
4. Faça o push para a branch (git push origin feature/nova-feature).
5. Abra um Pull Request.
