#include "fila.h"
#include <stdio.h>

int main (int argc, char *argv[]){
    int elemento;
    printf("Bem vindo ao banco xDd!\n");
    struct Fila f;
    create(&f);

    inserir(&f,1);
    inserir(&f,4);
    inserir(&f,3);
    inserir(&f,2);

    
    while (!isEmpty(f))
    {
        elemento = retirar(&f);
        printf("%d ", elemento);
    }

    return 0;
}