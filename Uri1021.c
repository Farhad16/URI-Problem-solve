#include<stdio.h>
int main()
{
    int n100,n50,n20,n10,n5,n2,m1,m2,m3,m4,m5,m6,result;
    double num;
    scanf("%lf",&num);
    num=num*100.00;
    if (num>=0.0 || num<=1000000.00){
    result=(int)num;
    printf("NOTAS:\n");
    n100=result/10000;
    result=result%10000;
    printf("%d nota(s) de R$ 100.00\n",n100);
    n50=result/5000;
    result=result%5000;
    printf("%d nota(s) de R$ 50.00\n",n50);
    n20=result/2000;
    result=result%2000;
    printf("%d nota(s) de R$ 20.00\n",n20);
    n10=result/1000;
    result=result%1000;
    printf("%d nota(s) de R$ 10.00\n",n10);
    n5=result/500;
    result=result%500;
    printf("%d nota(s) de R$ 5.00\n",n5);
    n2=result/200;
    result=result%200;
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    m1=result/100;
    result=result%100;
    printf("%d moeda(s) de R$ 1.00\n",m1);
    m2=result/50;
    result=result%50;
    printf("%d moeda(s) de R$ 0.50\n",m2);
    m3=result/25;
    result=result%25;
    printf("%d moeda(s) de R$ 0.25\n",m3);
    m4=result/10;
    result=result%10;
    printf("%d moeda(s) de R$ 0.10\n",m4);
    m5=result/5;
    result=result%5;
    printf("%d moeda(s) de R$ 0.05\n",m5);
    m6=result/1;
    result=result%1;
    printf("%d moeda(s) de R$ 0.01\n",m6);
    }
    return 0;

}

