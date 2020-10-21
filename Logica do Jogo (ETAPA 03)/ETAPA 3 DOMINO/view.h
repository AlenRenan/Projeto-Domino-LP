#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "model.h"

//Chama as funcoes
int menuOpcoes();
void mostraPecas(tipo_domino pecasFormadas);
void imprimeEmbaralhado(tipo_domino pecasFormadas);
void Jogador(tipo_domino pecasFormadas);
void Mesa(tipo_domino pecasJogadores);