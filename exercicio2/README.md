# 🎮 Jogo de Adivinhação em C

Este é um projeto desenvolvido para praticar conceitos de lógica, controle de fluxo e interação com o usuário via terminal.

## 🛠️ Como funciona?
O programa gera um número aleatório entre **1 e 100** e o jogador deve tentar adivinhar qual é. O jogo possui um sistema de pontuação que diminui conforme os erros e oferece três níveis de dificuldade:

* **Fácil:** 20 tentativas
* **Médio:** 10 tentativas
* **Difícil:** 5 tentativas

## 🧠 Conceitos Praticados
* **Geração de Números Aleatórios:** Uso das bibliotecas `stdlib.h` e `time.h` com `srand`.
* **Estruturas de Repetição:** Loop `for` para controlar o número de tentativas.
* **Condicionais:** `if`, `else if` e `switch` para validar entradas e níveis.
* **Cálculos Matemáticos:** Uso da função `fabs()` da biblioteca `math.h` para calcular a perda de pontos.

## 🚀 Como rodar
1. Certifique-se de ter um compilador de C instalado (como o GCC).
2. Compile o arquivo:
   ```bash
   gcc adivinhacao.c -o adivinhacao -lm
