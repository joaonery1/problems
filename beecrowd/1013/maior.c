#include <stdio.h>


int maior(int n1, int n2){
    if(n1 > n2){
        return n1;
    }else{
        return n2;
    }
}

int main(){
    int a,b,c,final;
    scanf("%d %d %d", &a,&b,&c);

    final = maior(a,b);
    final = maior(final,c);


    printf("%d eh o maior\n",final);
    return 0;

}