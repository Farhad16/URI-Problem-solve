#include<stdio.h>
int main(){
    int a,i,sqr;
    scanf("%d",&a);
    for(i = 1;i<=a;i++){
        if(i%2 == 0){
            sqr = i*i;
            printf("%d^2 = %d\n",i,sqr);
            sqr = 0;
        }
    }
    return 0;
}

