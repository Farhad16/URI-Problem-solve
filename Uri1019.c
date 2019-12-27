#include<stdio.h>
int main()
{
    int a,n1,n2,n3,result;
    scanf("%d",&a);
    n1=a/3600;
    result=a%3600;
    n2=result/60;
    result=result%60;
    n3=result/60;
    printf("%d:%d:%d\n",n1,n2,result);
    return 0;

}
