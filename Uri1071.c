#include<stdio.h>
int main(){
    int a,i,b,sum = 0;
    scanf("%d%d",&a,&b);
    if(a>b){
        for(i = b+1;i<a;i++){
            if(i%2==1 || i%2==-1){
                sum = sum+i;
            }
        }
            printf("%d\n",sum);
    }
    else if(a<b){
        for(i = a-1;i<b;i++){
            if(i %2==1 || i%2==-1){
                sum = sum+i;
            }
        }
            printf("%d\n",sum);
    }
    else{
        printf("%d\n",sum);
    }


    return 0;
}

