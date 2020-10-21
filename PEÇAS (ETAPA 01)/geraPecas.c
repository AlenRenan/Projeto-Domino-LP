#include <stdio.h>
#include <string.h>
#include <time.h>

#define nPecas 28 //qtd de pecas

void flush_in(); //limpa o buffer overflow

//cria o tipo peca
typedef struct Peca
{

    int lado1;
    int lado2;

} tipo_peca;

typedef struct Domino
{
    tipo_peca domino[nPecas];

} tipo_domino;

//Chama as funções
tipo_domino formaPecas(tipo_domino pecasFormadas);
void mostraPecas(tipo_domino pecasFormadas);
void imprimeEmbaralhado(tipo_domino pecasFormadas);

int main()
{

    int escolha;
    tipo_domino pecasFormadas;
    pecasFormadas = formaPecas(pecasFormadas);

    //Menu
    do
    {
        printf("\n(1) Mostrar Pecas\n");
        printf("(2) Embaralhar\n");
        printf("(3) Mostrar Pecas Embaralhadas\n");
        printf("(4) Sair\n");
        printf("Qual sua opcao? \n");
        scanf("%d", &escolha);

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

tipo_domino formaPecas(tipo_domino pecasFormadas)
{

    int repet = 0;

    for (int i = 0; i <= 6; i++)
    {
        for (int j = i; j <= 6; j++)
        {
            if (repet < 28)
            {
                pecasFormadas.domino[repet].lado1 = i;
                pecasFormadas.domino[repet].lado2 = j;
            }
            repet++;
        }
    }
    return pecasFormadas;
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
//Função que gera as peças
void imprimeEmbaralhado(tipo_domino pecasFormadas)
{
    srand((unsigned int)time(0));
    
    printf("Suas Pecas:\n");
    for (int i = 0; i < nPecas; i++)
    {
        printf("[%d:%d]", pecasFormadas.domino[rand() % 28].lado1, pecasFormadas.domino[rand() % 28].lado2);
    }
}