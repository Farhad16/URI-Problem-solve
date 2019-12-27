#include<stdio.h>
int main(){
     int a,i,temp = 0,temp1 = 0,temp2 = 0,temp3 = 0;
    for(i = 1; i<= 5; i++){
        scanf("%d",&a);
        if(a%2 == 0){
            temp = temp+1;
        }
        if(a%2 != 0){
            temp1 = temp1+1;
        }
        if(a > 0){
            temp2 = temp2+1;
        }
        if(a < 0){
            temp3 = temp3+1;
        }
    }
    printf("%d valor(es) par(es)\n",temp);
    printf("%d valor(es) impar(es)\n",temp1);
    printf("%d valor(es) positivo(s)\n",temp2);
    printf("%d valor(es) negativo(s)\n",temp3);
}

