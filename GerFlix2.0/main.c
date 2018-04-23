#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/

void mostrarSeries(eSerie Serie[],int cantidad);

int main()
{
    eSerie Series [5];
    /*eSerie listadoSeries[TAMANIO];*/
   /* CrearListadoSeries(listadoSeries,5);*/

    mostrarSeries(Series,5);


    printf("Jose De Felippe!\n");
    return 0;
}
