#include<stdio.h>
int main()
{
    int a,n1,n2,n3,result;
    scanf("%d",&a);
    n1=a/365;
    result=a%365;
    n2=result/30;
    result=result%30;
    n3=result/30;
    printf("%d ano(s)\n",n1);
    printf("%d mes(es)\n",n2);
    printf("%d dia(s)\n",result);
    return 0;

}
