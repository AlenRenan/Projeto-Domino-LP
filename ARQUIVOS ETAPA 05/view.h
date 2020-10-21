#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "model.h"

//Chama as funcoes
int menuOpcoes();
int menuJogo();
void mostraPecas(tipo_domino pecasFormadas);
void imprimeEmbaralhado(tipo_domino pecasFormadas);
void Jogador(tipo_domino pecasFormadas);
void Mesa(tipo_domino pecasJogadores);
void comprarPeca(tipo_domino pecasJogadores);
void posicionarPeca(tipo_domino pecasJogadores);
int Regras();
int salvaJogo(void);
int carregaJogo();