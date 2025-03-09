#ifndef LIBRARIE
#define LIBRARIE
#include <stdlib.h> 
#include <string.h>
#include "carte.h"
#include <stdio.h>

typedef struct librarie
{
    Carte** list;
    int limit;
    int nrCarti;
}Librarie;

Librarie* initL(int n)
{
    int i;
    Librarie* nou = (Librarie*) malloc (sizeof(Librarie));
    nou->list = initAll(n);
    nou->limit = n;
    nou->nrCarti = 0;
    return nou;
}

void addBook(Librarie* L, char* fn)
{
    Carte* book = initC();
    FILE* fp = fopen(fn, "r");
    int n;
    switch (strcmp (fn, "stdin"))
    {   case 0:
            printf("Numele cartii:");
            fgets(book->Nume, 130, stdin);
            printf("Autorul:");
            fgets(book->Autor, 130, stdin);
            printf("Numar pagini:");
            fscanf(stdin, "%d", &book->nrPagini);
            printf("Anul publicarii:");
            fscanf(stdin, "%d", &book->an);
            printf("Editia:");
            fscanf(stdin, "%d", &book->editie);
            printf("Data publicarii:");
            fscanf(stdin, "%d %d %d", &book->data[0], &book->data[1], &book->data[2]);break;
        default: 
            fscanf(fp, "%d", &n);
            while (n)
            {
            fgets(book->Nume, 130, fp);
            fgets(book->Autor, 130, fp);
            fscanf(fp, "%d", &book->nrPagini);
            fscanf(fp, "%d", &book->an);
            fscanf(fp, "%d", &book->editie);
            fscanf(fp, "%d %d %d", &book->data[0], &book->data[1], &book->data[2]);break;
            }
    }
    if(L->nrCarti == L->limit)
    {
        L->list = (Carte**) realloc (L->list, (L->limit + 10));
        L->limit += 10;
    }
    L->list[L->nrCarti ++] = book;
    free (book);fclose (fp);
}

void afisBook (Librarie* Lb)
{
    int i;
    for(i=0; i<Lb->nrCarti; i++)
    afisCarte(Lb->list[i]);
}

#endif