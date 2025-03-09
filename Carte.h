#ifndef CARTE
#define CARTE
#include <stdlib.h>
#include <stdio.h>  
//?????

typedef struct 
{
    char* Nume;
    char* Autor;
    int nrPagini;
    int an;
    int editie;
    int data[3];
} Carte;

Carte* initC()
{
    Carte* nou = (Carte*) malloc(sizeof(Carte));
    nou->Nume = (char*) malloc(130);
    nou->Autor = (char*) malloc(130);
    nou->nrPagini = 0;
    nou->an = 0;
    nou->editie = 0;
    return nou;
}

Carte** initAll(int n)
{
    int i;
    Carte** nou = (Carte**) malloc(n * sizeof(Carte));
    for(i=0; i<n; i++)
    {
        nou[i] = initC();
    }
    return nou;
}

void afisCarte (Carte* c)
{
    printf("%s\n", c->Nume);
    printf("%s\n", c->Autor);
    printf("%d\n", c->an);
    printf("%d\n", c->editie);
    printf("%d\n", c->nrPagini);
    printf("%d %d %d\n", c->data[0], c->data[1], c->data[2]);
}

#endif 