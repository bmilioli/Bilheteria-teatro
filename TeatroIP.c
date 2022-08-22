#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[40];
    char tel[15];
    char email[40];
    char status[2];
    int tipo;
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

void letranumero(int numero) // Transforma o número em uma letra de fileira.
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

void numeroletra(char letra, int *n) // Transforma a letra de uma fileira digitada em um numero.
{
    switch (letra)
    {
    case 'A':
        *n = 0;
        break;
    case 'B':
        *n = 1;
        break;
    case 'C':
        *n = 2;
        break;
    case 'D':
        *n = 3;
        break;
    case 'E':
        *n = 4;
        break;
    case 'F':
        *n = 5;
        break;
    case 'G':
        *n = 6;
        break;
    case 'H':
        *n = 7;
        break;
    case 'I':
        *n = 8;
        break;
    case 'J':
        *n = 9;
        break;
    case 'K':
        *n = 10;
        break;
    case 'L':
        *n = 11;
        break;
    case 'M':
        *n = 12;
        break;
    case 'N':
        *n = 13;
        break;
    case 'O':
        *n = 14;
        break;
    case 'P':
        *n = 15;
        break;
    case 'Q':
        *n = 16;
        break;
    case 'R':
        *n = 17;
        break;
    case 'S':
        *n = 18;
        break;
    case 'T':
        *n = 19;
        break;
    case 'U':
        *n = 20;
        break;
    case 'V':
        *n = 21;
        break;
    case 'W':
        *n = 22;
        break;
    case 'X':
        *n = 23;
        break;
    case 'Y':
        *n = 24;
        break;
    case 'Z':
        *n = 25;
        break;
    }
}

void zerar(cadeiras vetor[22][30])
{

    int i, j;
    for (i = 0; i < 22; i++)
        for (j = 0; j < 30; j++)
        {
            strcpy(vetor[i][j].nome, " ");
            strcpy(vetor[i][j].tel, " ");
            strcpy(vetor[i][j].email, " ");
            strcpy(vetor[i][j].status, "L");
            vetor[i][j].tipo = 0;
        }
}

void imprimirDados(int i, int j, cadeiras cadeira[22][30])
{
    printf("%s", cadeira[i][j].nome);
    printf("Telefone: %s", cadeira[i][j].tel);
    printf("Email: %s", cadeira[i][j].email);
    if (cadeira[i][j].tipo == 1)
    {
        printf("Meia entrada\n");
    }
    else if (cadeira[i][j].tipo == 2)
    {
        printf("Entrada inteira\n");
    }
}

int main()
{
    cadeiras cadeira[22][30];
    int i, j, cont = 0, cont2 = 0;
    int op;
    char aux;
    zerar(cadeira);

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

                printf("       ");

                for (j = 15; j < 30; j++)
                {
                    letranumero(i);
                    printf("%d-", j + 1);
                    printf("%s ", cadeira[i][j].status);
                }
                printf("\n");
            }
            break;

        case 2:
            // system("clear");
            printf("Digite fileira da cadeira que deseja comprar: ");
            scanf(" %c", &aux);
            numeroletra(aux, &i);
            printf("Digite coluna da cadeira que deseja comprar: ");
            scanf("%d", &j);
            getchar();
            j--;
            if (cadeira[i][j].status[0] == 'L')
            {
                printf("Digite o nome do cliente: ");
                fgets(cadeira[i][j].nome, 40, stdin);
                printf("Digite o telefone do cliente: ");
                fgets(cadeira[i][j].tel, 15, stdin);
                printf("Digite o email do cliente: ");
                fgets(cadeira[i][j].email, 40, stdin);
                printf("Digite 1 pra Meia e 2 para Inteira: ");
                scanf("%d", &cadeira[i][j].tipo);

                if (cadeira[i][j].tipo == 1)
                {
                    cont++;
                }
                else
                {
                    cont2++;
                }

                if (cadeira[i][j].tipo != 1 && cadeira[i][j].tipo != 2)
                {
                    do
                    {
                        printf("Tipo invalido, digite 1 pra Meia e 2 para Inteira: ");
                        scanf("%d", &cadeira[i][j].tipo);
                    } while (cadeira[i][j].tipo != 1 && cadeira[i][j].tipo != 2);
                }

                strcpy(cadeira[i][j].status, "O");
                printf("\nCadeira comprada com sucesso!\n");
            }
            else
            {
                printf("\nCadeira ja esta ocupada!\n");
            }
            break;

        case 3:
            printf("Digite fileira da cadeira que deseja reservar: ");
            scanf(" %c", &aux);
            numeroletra(aux, &i);
            printf("Digite coluna da cadeira que deseja reservar: ");
            scanf("%d", &j);
            getchar();
            j--;
            if (cadeira[i][j].status[0] == 'L')
            {
                printf("Digite o nome do cliente: ");
                fgets(cadeira[i][j].nome, 40, stdin);
                printf("Digite o telefone do cliente: ");
                fgets(cadeira[i][j].tel, 15, stdin);
                printf("Digite o email do cliente: ");
                fgets(cadeira[i][j].email, 40, stdin);
                printf("Digite 1 pra Meia e 2 para Inteira: ");
                scanf("%d", &cadeira[i][j].tipo);

                if (cadeira[i][j].tipo == 1)
                {
                    cont++;
                }
                else
                {
                    cont2++;
                }

                if (cadeira[i][j].tipo != 1 && cadeira[i][j].tipo != 2)
                {
                    do
                    {
                        printf("Tipo invalido, digite 1 pra Meia e 2 para Inteira: ");
                        scanf("%d", &cadeira[i][j].tipo);
                    } while (cadeira[i][j].tipo != 1 && cadeira[i][j].tipo != 2);
                }

                strcpy(cadeira[i][j].status, "R");
                printf("\nCadeira reservada com sucesso!\n");
            }
            else
            {
                printf("\nCadeira ja esta ocupada!\n");
            }
            break;

        case 4:

            printf("Digite fileira da cadeira que deseja consultar: ");
            scanf(" %c", &aux);
            numeroletra(aux, &i);
            printf("Digite coluna da cadeira que deseja consultar:  ");
            scanf("%d", &j);
            getchar();
            j--;

            if (cadeira[i][j].status[0] == 'L')
            {
                printf("A cadeira está livre\n");
            }
            else if (cadeira[i][j].status[0] == 'O')
            {
                printf("\nA cadeira está ocupada por: ");
                imprimirDados(i, j, cadeira);
            }
            else if (cadeira[i][j].status[0] == 'R')
            {
                printf("A cadeira está reservada por: ");
                imprimirDados(i, j, cadeira);
            }

            break;

        case 5:
            printf("Total arrecadado: R$ %d,00 \n", (cont * 15) + (cont2 * 30));
            break;
        }

        printf("\n");
    } while (op != 6);

    printf("OBRIGADO POR UTILIZAR O NOSSO SISTEMA!");

    return 0;
}
