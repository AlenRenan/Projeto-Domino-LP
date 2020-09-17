#include <stdio.h>
#include <string.h>
#include <time.h>
#include "controller.h"

#define nPecas 28 //qtd de pecas

void rodaJogo()
{

    int escolha;
    tipo_domino pecasFormadas;
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

        default:
            break;
        }
    } while (escolha != 4);
}
