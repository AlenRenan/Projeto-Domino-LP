#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("==================================================\n\tBEM VINDO AO JOGO DE DOMINO - PUC/SP\n==================================================\n");

    int escolhaMenu;
    int nPecas = 7;
    int todasPecas[] = {66, 65, 64, 63, 62, 61, 60, 55, 54, 53, 52, 51, 50, 44, 43, 42, 41, 40, 33, 32, 31, 30, 22, 21, 20, 11, 10, 00};

label: //Ponto de referência do goto

    //Menu
    printf("\n\n(1) Ver Pecas\n(2) Embaralhar e Distirbuir Pecas\n(3) Reorganizar pecas\n(4) Voltar para o Menu\n(5) Sair do jogo\n");
    printf("\nESCOLHA: ");
    scanf("%d", &escolhaMenu);

    //Escolhas a partir do menu
    if (escolhaMenu == 1) //Mostra Pecas
    {
        printf("\nA pecas sao: \n");
        for (int i = 0; i < 28; i++)
        {

            printf("[ %d ]", todasPecas[i]);
        }
        goto label;
    }
    else if (escolhaMenu == 2) //Embraralha e Distribui as peças
    {
        //"Semente" que impede que os números sejam iguais
        srand((unsigned int)time(0));
        //srand(time(0));

        printf("Suas Pecas:\n");
        //Gera as peças de acordo com o número aleatório gerado
        for (int i = 1; i <= nPecas; i++)
        {
            printf("\nPECA %d: [ %d ]\t", i, todasPecas[rand() % 28]);
            //Implementar o inicio do jogo (QUANDO O JOGADOR SELECIONA A PEÇA QUE QUER JOGAR)
        }
    }
    else if (escolhaMenu == 3)
    {
        printf("\nReorganizando Pecas ...");
        for (int i = 0; i < 28; i++)
        {

            printf("[ %d ]", todasPecas[i]);
        }
    }
    else if (escolhaMenu == 4) //Retorna ao menu (Mudar para o menu principal quando for implementado o menu incial completo)
    {
        goto label;
    }
    else if (escolhaMenu == 5)
    {
        printf("Saindo do Jogo . . .\n");
    }
}