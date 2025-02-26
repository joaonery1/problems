#include <stdio.h>
 
int main() {
    double radius, volume;
    scanf("%lf", &radius);
    double pi = 3.14159;
    volume = (4.0/3) * pi * (radius*radius*radius);
    
    printf("%.3lf", volume);

    return 0;
}