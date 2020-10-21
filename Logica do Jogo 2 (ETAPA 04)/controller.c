#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "controller.h"

void rodaJogo()
{

    int escolha;
    tipo_domino pecasFormadas;
    tipo_domino pecasJogadores;
    pecasFormadas = formaPecas();


    //Menu
    do
    {
        escolha = menuOpcoes();

        switch (escolha)
        {
        case 1:
            mostraPecas(pecasFormadas);
            break;

        case 2:
            printf("As pecas foram embaralhadas");
            break;

        case 3:
            imprimeEmbaralhado(pecasFormadas);
            break;
        case 4:

            menuJogoCont();
            break;
        case 5:

            Regras();

            break;
        default:
            break;
        }
    } while (escolha != 7);
}
void menuJogoCont()
{
    int escolhaDentroJogo;
    tipo_domino pecasJogadores;
    pecasJogadores  = formaPecas();
   
    do
    {
        escolhaDentroJogo = menuJogo();

        switch (escolhaDentroJogo)
        {
        case 1:
            Jogador(pecasJogadores);
            break;

        case 2:
           Mesa(pecasJogadores);
            break;
        case 3:
            comprarPeca(pecasJogadores);
            break;
            case 4:
                posicionarPeca(pecasJogadores);
             break;
                case 5:
                    printf("Precisa ser implementado ainda(nao faz parte do requisito 4");
             break;
        default:
            break;
        }
    } while (escolhaDentroJogo != 6);
}

