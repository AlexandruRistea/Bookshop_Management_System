#ifndef TERMINAL
#define TERMINAL
#include "librarie.h"
#include <stdlib.h>
#include <stdio.h>  
#include <string.h>

void instructiuni ()
{
    printf("Terminal nou - Comenzi: \nadd - adaugare carte noua \nafis - afisare carti");
    printf("\nexit - iesire\n");
}

void skibididip (Librarie* Lb)
{
    int n;
    printf("Cate carti aveti?");
    scanf("%d", &n);
    getc(stdin);
    while (n)
    {
        addBook (Lb, "stdin");
        n--;
    }
}

void terminal (Librarie* Lb)
{
    instructiuni();
    char command [6]; 
    char filename [30];
    printf("Introduceti comanda-->");
    scanf("%s", command);
    while (strcmp (command , "exit")) 
    {
        if (!strcmp ("add" , command ))
        {
            char a, c;
            scanf("%c", &c);
            printf("Tastatura?  y/n\n");
            scanf("%c", &a);
            // if (a == 'y')
            //     skibididip (Lb);
            // else if (a == 'n')
            // {   printf("Numele fisierului:\n");
            //     scanf("%s", filename);
            //     addBook (Lb, filename);
            // }
            switch (a)
            {case 'y':
                skibididip (Lb);break;
            case 'n':
                printf("Numele fisierului:\n");
                scanf("%s", filename);
                addBook (Lb, filename);break;
            }
        }
        else if (!strcmp ("afis" , command))
        {
            afisBook (Lb);
        }
        printf("Introduceti comanda-->");
        scanf("%s", command);
    }
}

#endif