#include<stdio.h>
int main(){
    int allocation=0,num,value=0,fiallo,i;
    for(i=0;i<100;i++){
        scanf("%d",&num);
        allocation++;
        if(num>value){
            value = num;
            fiallo = allocation;

        }
    }
    printf("%d\n",value);
    printf("%d\n",fiallo);
    return 0;
}
