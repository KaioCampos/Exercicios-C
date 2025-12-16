/*
    Name: main.c
    Author: Kaio Campos
    Date: 16/12/2025
    Description: Programa que simula a operação de uma calculadora usando funções.
*/

#include <stdio.h>

int Somar(int a, int b);
int Subtrair(int a, int b);
int Multiplicar(int a, int b);
float Dividir(int a, int b);

int main()
{
    int op, a, b;

    do
    {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - SOMAR\n");
        printf("2 - SUBTRAIR\n");
        printf("3 - MULTIPLICAR\n");
        printf("4 - DIVIDIR\n");
        printf("0 - SAIR\n");
        printf("ESCOLHA UMA OPCAO: ");
        scanf("%d", &op);

        if(op < 0 || op > 4)
        {
            printf("\nOpcao invalida!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            getchar();
            continue;
        }

        if(op == 0)
        {
            printf("\nSaindo...\n");
            break;
        }

        printf("\nDigite o primeiro numero: ");
        scanf("%d", &a);

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

		// Executa a operação escolhida
        switch(op)
        {
            case 1:
                printf("\nResultado: %d\n", Somar(a, b));
                break;

            case 2:
                printf("\nResultado: %d\n", Subtrair(a, b));
                break;

            case 3:
                printf("\nResultado: %d\n", Multiplicar(a, b));
                break;

            case 4:
                if(b == 0)
                    printf("\nErro: divisao por zero!\n");
                else
                    printf("\nResultado: %.2f\n", Dividir(a, b));
                break;
        }

        printf("\nPressione ENTER para continuar...");
        getchar();
        getchar();

    } while(op != 0);

    return 0;
}

int Somar(int a, int b)
{
    return a + b;
}

int Subtrair(int a, int b)
{
    return a - b;
}

int Multiplicar(int a, int b)
{
    return a * b;
}

float Dividir(int a, int b)
{
    return (float)a / b;
}
