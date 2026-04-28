/*
    Name: Advinhacao.c
    Author: Kaio Campos
    Date: 13/01/26
    Description: Programa que simula um jogo de advinhacao.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    printf("=====================================\n");
    printf("Bem vindo ao nosso jogo de advinhacao\n");
    printf("=====================================\n");

    srand(time(NULL));

    int numerosecreto = rand() % 100 + 1;
    int chute;
    double pontos = 1000.0;
    int acertou = 0;

    int nivel;
    int numerodetentativas;

    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    if (nivel < 1 || nivel > 3)
    {
        printf("Nivel invalido! Usando nivel Medio.\n");
        nivel = 2;
    }

    switch (nivel)
    {
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 10;
            break;
        default:
            numerodetentativas = 5;
            break;
    }

    for (int i = 1; i <= numerodetentativas; i++)
    {
        printf("\nTentativa %d de %d\n", i, numerodetentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);

        if (chute < 1 || chute > 100)
        {
            printf("Chute invalido! Digite um numero entre 1 e 100.\n");
            i--; // nao perde tentativa
            continue;
        }

        printf("Seu chute foi: %d\n", chute);

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador!\n");
            break;
        }
        else if (maior)
        {
            printf("Seu chute foi maior que o numero secreto.\n");
        }
        else
        {
            printf("Seu chute foi menor que o numero secreto.\n");
        }

        double pontosperdidos = fabs(chute - numerosecreto) / 2.0;
        pontos -= pontosperdidos;

        if (pontos < 0)
        {
            pontos = 0;
        }
    }

    if (!acertou)
    {
        printf("\nQue pena! O numero secreto era: %d\n", numerosecreto);
    }

    printf("Total de pontos: %.1f\n", pontos);
    printf("\nFim de jogo!\n");

    return 0;
}
