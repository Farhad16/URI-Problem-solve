#include<stdio.h>
int main()
{
    int x,y,n,al=0,ga=0,de=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==1)
            al = al+1;
        else if(n==2)
            ga = ga+1;
        else if(n==3)
            de = de+1;
        else if(n>4)
            continue;
        else
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",ga);
    printf("Diesel: %d\n",de);
    return 0;
}

