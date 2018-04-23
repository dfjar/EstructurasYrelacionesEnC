#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED


typedef struct{
    int idSerie;    /*pk*/
    char nombre[50];
    char genero[50];
}eSerie;

void mostrarSeries(eSerie Serie[],int cantidad);

#endif // SERIE_H_INCLUDED

