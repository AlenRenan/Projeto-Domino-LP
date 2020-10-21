#include <stdio.h>
#include <string.h>
#include <time.h>
#include "controller.h"
#include "view.h"

#define nPecas 28 //qtd de pecas

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
        default:
            break;
        }
    } while (escolha != 5);
}
void menuJogoCont()
{
    int escolhaDentroJogo;
    tipo_domino pecasJogadores;
    pecasJogadores = formaPecas();
    


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

        default:
            break;
        }
    } while (escolhaDentroJogo != 3);
}

