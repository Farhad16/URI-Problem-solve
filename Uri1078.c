#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        j = i*a;
        printf("%d x %d = %d\n",i,a,j);
    }
    return 0;
}

