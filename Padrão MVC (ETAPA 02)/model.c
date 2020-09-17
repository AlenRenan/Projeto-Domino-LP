#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "model.h"

// Função que forma as peças
tipo_domino formaPecas()
{
    tipo_domino pecasFormadas;

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
