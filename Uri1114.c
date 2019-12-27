#include<stdio.h>
int main()
{
    int i,s,j,n=2002;
    while(1)
    {
        scanf("%d",&j);
        if(j == n)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }

    return 0;
}


