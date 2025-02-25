#include <stdio.h>

int main(){

    int distance;
    double comb, total;

    scanf("%d", &distance);
    scanf("%lf", &comb);

    total = distance/comb;
    printf("%.3lf km/l\n",total);

    return 0;
}