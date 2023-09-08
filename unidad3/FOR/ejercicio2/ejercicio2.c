//Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    for(i=1; i<= 10 ; i+=2){
        printf("%i \n", i);
    }
    system("pause");
}