#include "pilha.h"
#include <stdio.h>

int main (int argc, char *argv[]){
    int valor, resto;
    struct Pilha p;
    create(&p);
    printf("Digite um valor :");
    scanf("%d", &valor);

    while(valor != 0){
        resto = valor % 2;
        push(&p, resto);
        valor = valor / 2;
    }

    while (!isEmpty(p)){
        resto = pop(&p);
        printf("%d", resto);
    }

    printf("\n\nFim do programa\n\n");
    return 0;
}
