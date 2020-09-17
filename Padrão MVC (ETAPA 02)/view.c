#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "view.h"
#include "model.h"

int menuOpcoes()
{
    int escolha;


    printf("\n(1) Mostrar Pecas\n");
    printf("(2) Embaralhar\n");
    printf("(3) Mostrar Pecas Embaralhadas\n");
    printf("(4) Sair\n");
    printf("Qual sua opcao? \n");
    scanf_s("%d", &escolha);

    return escolha;
}

//Função que imprime todas as peças organizadas
void mostraPecas(tipo_domino pecasFormadas)
{
    for (int j = 0; j < 28; j++)
    {
        if (pecasFormadas.domino[j].lado2 == 6)
        {
            printf("[ %d:%d ]\n", pecasFormadas.domino[j].lado1, pecasFormadas.domino[j].lado2);
        }
        else
        {
            printf("[ %d:%d ]", pecasFormadas.domino[j].lado1, pecasFormadas.domino[j].lado2);
        }
    }
}
//Função que gera as peças embaralhadas
void imprimeEmbaralhado(tipo_domino pecasFormadas)
{
    srand((unsigned int)time(0));

    printf("Suas Pecas:\n");
    for (int i = 0; i < nPecas; i++)
    {
        printf("[ %d:%d ]", pecasFormadas.domino[rand() % 28].lado1, pecasFormadas.domino[rand() % 28].lado2);
    }
}
