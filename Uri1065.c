#include<stdio.h>
int main(){
     int a,i,temp = 0;
    for(i = 1; i<= 5; i++){
        scanf("%d",&a);
        if(a%2 == 0){
            temp = temp+1;
        }
    }
    printf("%d valores pares\n",temp);
}
