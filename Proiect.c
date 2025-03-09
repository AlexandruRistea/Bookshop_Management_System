#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "librarie.h"
#include "carte.h"
#include "terminal.h"



int main()
{
    Librarie* citi = initL (1);
    terminal (citi);
    free (citi);

    return 0;
}