

// Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
// Entrada

// O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
// Saída

// Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.


#include <stdio.h>

int main (){

    int number;
    scanf("%d", &number);
    int cel100,cel50,cel20,cel10, cel5, cel2, cel1;
    cel100 = number / 100; //5 
    cel50 = ((number - (cel100*100))) / 50; //76 / 50  = 1
    cel20 = ((number - cel100*100) - (cel50*50)) / 20;
    cel10 = ((number - cel100*100) - (cel50*50) - (cel20*20)) / 10;
    cel5 = ((number - cel100*100) - (cel50*50) - (cel20*20)- (cel10*10)) / 5;
    cel2 = ((number - cel100*100) - (cel50*50) - (cel20*20)- (cel10*10) - (cel5*5)) / 2;
    cel1 = ((number - cel100*100) - (cel50*50) - (cel20*20)- (cel10*10) - (cel5*5) - (cel2*2)) / 1;
    printf("%d\n",number);
    printf("%d nota(s) de R$ 100,00\n", cel100);
    printf("%d nota(s) de R$ 50,00\n", cel50);
    printf("%d nota(s) de R$ 20,00\n", cel20);
    printf("%d nota(s) de R$ 10,00\n", cel10);
    printf("%d nota(s) de R$ 5,00\n", cel5);
    printf("%d nota(s) de R$ 2,00\n", cel2);
    printf("%d nota(s) de R$ 1,00\n", cel1);

    return 0;
}