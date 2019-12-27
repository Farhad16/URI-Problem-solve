#include<stdio.h>
int main()
{
    int a,b,c,d,sum,sum1;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=c+d;
    sum1=a+b;
    if (b>c && d>a && sum>sum1 && c>=0 && d>=1 && a%2==0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
    return 0;
}
