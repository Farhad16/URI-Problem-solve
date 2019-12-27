#include<stdio.h>
int main(){
    int a,i,x,j=0,k=0;
    scanf("%d",&a);
    for(i = 0;i<a;i++){
        scanf("%d",&x);
        if(x>=10 && x<=20){
            j++;
        }
        else
            k++;
    }
    printf("%d in\n",j);
    printf("%d out\n",k);

    return 0;
}
