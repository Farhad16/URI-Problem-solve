#include<stdio.h>
int main(){
    float a;
    int i,temp = 0;
    for(i = 1; i<= 6; i++){
        scanf("%f",&a);
        if(a > 0){
            temp = temp+1;
        }
    }
    printf("%d valores positivos\n",temp);
}
