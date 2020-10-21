#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define nPecas 28 //qtd de pecas

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

tipo_domino formaPecas();