#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "view.h"
#include "model.h"

int menuOpcoes()
{
    int escolha;


    printf("\n\n(1) Mostrar Pecas\n");
    printf("(2) Embaralhar\n");
    printf("(3) Mostrar Pecas Embaralhadas\n");
    printf("(4) Iniciar jogo\n");
    printf("(5) Fechar Jogo\n");
    printf("Qual sua opcao? \n");
    scanf_s("%d", &escolha);

    return escolha;
}
int menuJogo()
{
    int escolhaDentroJogo;

    printf("\n\n(1) Inserir o numero de jogadores e distribuir as pecas\n");
    printf("(2) Ver Mesa\n");
    printf("(3) Retornar ao Menu\n");
    printf("Qual sua opcao? \n");
    scanf_s("%d", &escolhaDentroJogo);

    return escolhaDentroJogo;
}

//Funcao que imprime todas as pecas organizadas
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
//Funcao que gera as pecas embaralhadas
void imprimeEmbaralhado(tipo_domino pecasFormadas)
{
    srand((unsigned int)time(0));

    printf("Suas Pecas:\n");
    for (int i = 0; i < nPecas; i++)
    {
        printf("[ %d:%d ]", pecasFormadas.domino[rand() % 28].lado1, pecasFormadas.domino[rand() % 28].lado2);
    }
}

void Jogador(tipo_domino pecasJogadores)
{
    srand((unsigned int)time(0));
    int nJogadores;

    printf("Informe o numero de jogadores:\n");
    do {

        printf("O minimo de jogadores e 1 e o maximo 2 !!!\n");
        scanf_s("%d", &nJogadores);

    } while (nJogadores < 1 || nJogadores > 2);

    for (int i = 1; i <= nJogadores; i++) {

        srand((unsigned int)time(0));

        if (nJogadores == 1) {
            printf("\nPecas do jogador %d ", i);
            for (int i = 0; i < 7; i++)
            {
                printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1,pecasJogadores.domino[rand() % 28].lado2);
            }
        }
        else if (nJogadores == 2) {
            printf("\nPecas do jogador %d", i);
            for (int j = 0; j < 7; j++)
            {
                printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1,pecasJogadores.domino[j + 2].lado2);
            }
        }
    }
}
 //void comprarPeca(tipo_domino pecasJogadores){
     
 //}
void Mesa(tipo_domino pecasJogadores) {

    //int jog1[15], jog2[15];
    int nPecasCompra = 14;
    int nPecasJog1 = 7;
    int nPecasJog2 = 7;
    int nPecasMesa = 0;

    //Imprimir a quantidade de peças que cada jogador tem
    //Imprmir quais pecas estão na mesa
    printf("Pecas na Mesa: %d\n", nPecasMesa);
    printf("\n\nO jogador 1 tem : %d  pecas\n", nPecasJog1);
    printf("O jogador 2 tem : %d  pecas\n", nPecasJog2);
    printf("Pecas para comprar: %d pecas\n", nPecasCompra);
    

}
