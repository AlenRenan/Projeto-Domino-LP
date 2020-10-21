#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "view.h"

int menuOpcoes()
{
	int escolha;


	printf("\n\n(1) Mostrar Pecas\n");
	printf("(2) Embaralhar\n");
	printf("(3) Mostrar Pecas Embaralhadas\n");
	printf("(4) Iniciar jogo\n");
	printf("(5) Regras do Jogo\n");
	printf("(6) Carregar jogo salvo\n");
	printf("(7) Fechar Jogo\n");
	printf("Qual sua opcao? \n");
	scanf("%d", &escolha);

	return escolha;
}
int menuJogo()
{
	int escolhaDentroJogo;

	printf("\n\n(1) Inserir o numero de jogadores e distribuir as pecas\n");
	printf("(2) Ver Mesa\n");
	printf("(3) Comprar Peca\n");
	printf("(4) Fazer Jogada\n");
	printf("(5) Salvar Jogo\n");
	printf("(6) Retornar ao Menu\n");
	printf("Qual sua opcao? \n");
	scanf("%d", &escolhaDentroJogo);

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
	int pecasJog1;
	printf("Informe o numero de jogadores:\n");
	do {

		printf("O minimo de jogadores e 1 e o maximo 2 !!!\n");
		scanf("%d", &nJogadores);

	} while (nJogadores < 1 || nJogadores > 2);

	for (int i = 1; i <= nJogadores; i++) {

		srand((unsigned int)time(0));

		if (nJogadores == 1) {
			printf("\nPecas do jogador %d ", i);
			for (int i = 0; i < 7; i++)
			{
				printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1, pecasJogadores.domino[rand() % 28].lado2);

			}
		}
		else if (nJogadores == 2) {
			printf("\nPecas do jogador %d", i);
			for (int j = 0; j < 7; j++)
			{
				printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1, pecasJogadores.domino[j + 2].lado2);

			}
		}
	}
}
void comprarPeca(tipo_domino pecasJogadores) {

	int qtdPecas1, qtdPecas2, jogadorCompra;
	printf("\nQual jogador ira comprar ?:");
	scanf("%d", &jogadorCompra);

	if (jogadorCompra == 1) {

		printf("\nQuantas pecas deseja comprar ? (MAXIMO 2): ");
		scanf_s("%d", &qtdPecas1);

		switch (qtdPecas1) {
		case 1:
			srand((unsigned int)time(0));

			if (jogadorCompra == 1) {
				for (int i = 0; i < 1; i++)
				{
					printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1, pecasJogadores.domino[rand() % 28].lado2);
				}
				break;
		case 2:
			for (int i = 0; i < 2; i++)
			{
				printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1, pecasJogadores.domino[rand() % 28].lado2);
			}

			break;
			}
		}
	}
	else if (jogadorCompra == 2) {

		printf("\nQuantas pecas deseja comprar ? (MAXIMO 2): ");
		scanf("%d", &qtdPecas2);

		switch (qtdPecas2) {
		case 1:
			srand((unsigned int)time(0));

			if (jogadorCompra == 1) {
				for (int i = 0; i < 1; i++)
				{
					printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1, pecasJogadores.domino[rand() % 28].lado2);
				}
				break;
		case 2:
			for (int i = 0; i < 2; i++)
			{
				printf("[ %d:%d ]", pecasJogadores.domino[rand() % 28].lado1, pecasJogadores.domino[rand() % 28].lado2);
			}

			break;
			}
		}
	}
}
void posicionarPeca(tipo_domino pecasJogadores) {

	int jogador;
	int posicao;
	printf("Qual Jogador ira Jogar ?\n");
	scanf("%d", &jogador);

	switch (jogador) {

	case 1:
		printf("Em qual posição voce deseja jogar ?\n");
		printf("ESQUERDA (1) || DIREITA (2)\n");
		scanf("%d", &posicao);
		switch (posicao) {
		case 1:
			printf("Jogando na posicao da Esquerda\n");
			break;
		case 2:
			printf("Jogando na posicao da Direita\n");
			break;
		}
		break;
	case 2:
		switch (posicao) {
		case 1:
			printf("Jogando na posicao da Esquerda\n");
			break;
		case 2:
			printf("Jogando na posicao da Direita\n");
			break;
		}
		break;
	}
}
void Mesa(tipo_domino pecasJogadores) {
	comprarPeca(pecasJogadores);

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
int Regras() {

	FILE* arq;
	char c;

	arq = fopen("rules.txt", "r");

	if (arq == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		exit(1);
	}
	while ((c = fgetc(arq)) != EOF)
		printf("%c", c);

	fclose(arq);

	exit(0);
}
int salvaJogo(tipo_domino pecasJogadores) { //Salva o jogo 


	FILE* jogoSalvo; //ponteiro
	jogoSalvo = fopen("jogoSalvo.txt", "w"); // w (write) serve para escrever algo no arquivo

	//MESA
	fprintf(jogoSalvo, "MESA:\n"); //f para files

	//PECAS JOGADOR 1
	fprintf(jogoSalvo, "PECAS JOGADOR 1:\n");
	for (int i = 0; i < 7; i++)
	{
		fprintf(jogoSalvo, "[%d:", pecasJogadores.domino[rand() % 28].lado1);
		fprintf(jogoSalvo, "%d]", pecasJogadores.domino[rand() % 28].lado2);
	}

	//PECAS JOGADOR 2
	fprintf(jogoSalvo, "\nPECAS JOGADOR 2:\n");
	for (int i = 0; i < 7; i++)
	{
		fprintf(jogoSalvo, "[%d:", pecasJogadores.domino[rand() % 28].lado1);
		fprintf(jogoSalvo, "%d]", pecasJogadores.domino[rand() % 28].lado2);
	}

	fclose(jogoSalvo); //Salva e fecha o arquivo
	printf("O JOGO FOI SALVO COM SUCESSO !!!");

	return 0;
}
int carregaJogo() { // Carrega o de onde parou


	FILE* jogoSalvo;
	char c;

	jogoSalvo = fopen("jogoSalvo.txt", "r");

	if (jogoSalvo == NULL) {
		printf("ERRO NA ABERTURA DO ARQUIVO\n");
		exit(1);
	}
	while ((c = fgetc(jogoSalvo)) != EOF)
		printf("%c", c);

	fclose(jogoSalvo);
}
