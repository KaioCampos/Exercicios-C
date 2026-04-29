# 🔤 Jogo da Forca em C

Este projeto é um simulador de jogo de forca que utiliza conceitos avançados de programação em C, focando em manipulação de arquivos e organização de código.

## 🚀 Diferenciais Técnicos
* **Persistência de Dados:** O jogo lê um banco de palavras de um arquivo externo (`palavras.txt`) e permite que o usuário adicione novas palavras durante a execução.
* **Modularização:** Uso de um arquivo de cabeçalho (`forca.h`) para organizar protótipos e constantes.
* **Manipulação de Arquivos:** Uso de funções como `fopen`, `fscanf`, `fprintf` e `fseek` para gerenciar o banco de dados.
* **Interface em Console:** Renderização da forca e mensagens de vitória/derrota utilizando arte ASCII.

## 📂 Arquivos do Projeto
* `forca.c`: Lógica principal do jogo.
* `forca.h`: Protótipos das funções e definições.
* `palavras.txt`: Arquivo de texto que serve como banco de dados para as palavras.
