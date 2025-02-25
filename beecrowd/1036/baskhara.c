#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    double r1,r2,delta,raiz;
    scanf("%lf %lf %lf", &a, &b, &c);
    raiz = (b*b) - 4*a*c;
    delta = sqrt(raiz);

    r1 = ((-b) + delta)/(2*a);
    r2 = ((-b) - delta)/(2*a);

    if(a == 0 || raiz < 0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
    return 0;
}