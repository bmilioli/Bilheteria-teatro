#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[40];
    char tel[15];
    char email[40];
    char bilhete[10];
    char status[10];
} cadeiras;

void menu()
{ // Menu inicial do programa.
    printf("MENU PRINCIPAL \n\n");
    printf("1 - Visualizar mapa do teatro\n");
    printf("2 - Comprar cadeira\n");
    printf("3 - Reservar cadeira\n");
    printf("4 - Consultar uma determinada cadeira da Sala\n");
    printf("5 - Total arrecado\n");
    printf("6 - Sair do Aplicativo\n");
    printf("Digite o numero de uma das opcoes acima: ");
}

void letranumero(int numero)
{
    switch (numero)
    {
    case 0:
        printf("A");
        break;
    case 1:
        printf("B");
        break;
    case 2:
        printf("C");
        break;
    case 3:
        printf("D");
        break;
    case 4:
        printf("E");
        break;
    case 5:
        printf("F");
        break;
    case 6:
        printf("G");
        break;
    case 7:
        printf("H");
        break;
    case 8:
        printf("I");
        break;
    case 9:
        printf("J");
        break;
    case 10:
        printf("K");
        break;
    case 11:
        printf("L");
        break;
    case 12:
        printf("M");
        break;
    case 13:
        printf("N");
        break;
    case 14:
        printf("O");
        break;
    case 15:
        printf("P");
        break;
    case 16:
        printf("Q");
        break;
    case 17:
        printf("R");
        break;
    case 18:
        printf("S");
        break;
    case 19:
        printf("T");
        break;
    case 20:
        printf("U");
        break;
    case 21:
        printf("V");
        break;
    case 22:
        printf("W");
        break;
    case 23:
        printf("X");
        break;
    case 24:
        printf("Y");
        break;
    case 25:
        printf("Z");
        break;
    }
}

void zerar(cadeiras cadeira[21][29])
{
    int i, j;
    for (i = 0; i < 22; i++)
        for (j = 0; j < 30; j++)
        {
            strcpy(cadeira[i][j].nome, " ");
            strcpy(cadeira[i][j].tel, " ");
            strcpy(cadeira[i][j].email, " ");
            strcpy(cadeira[i][j].bilhete, " ");
            strcpy(cadeira[i][j].status, "L");
        }
}

int main()
{
    cadeiras cadeira[21][29];
    int i, j, op, controle;
    if (controle != 1)
    {
        zerar(cadeira);
        controle = 1;
    }
    printf("  ******* T E A T R O ******* \n");
    do
    {
        menu();
        scanf("%d", &op);
        printf("\n");

        switch (op)
        {
        case 1:
            for (i = 0; i < 22; i++)
            {
                for (j = 0; j < 15; j++)
                {
                    letranumero(i);
                    printf("%d-", j + 1);
                    printf("%s ", cadeira[i][j].status);
                }

                printf("        ");

                for (j = 15; j < 30; j++)
                {
                    letranumero(i);
                    printf("%d-", j + 1);
                    printf("%s ", cadeira[i][j].status);
                }
                printf("\n");
            }
            break;
        }

        printf("\n");
    } while (op != 6);

    return 0;
}
