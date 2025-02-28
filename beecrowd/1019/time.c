#include <stdio.h>

int main(){
    int time,sec,min=0,hr,md;
    scanf("%d", &time);
    hr = (time/3600);
    min = (time/60) - (hr*60);
    
    
    printf("%d:%d:%d\n",hr,min,sec);
    // printf("%d", hr);


    return 0;
    

}