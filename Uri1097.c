#include<stdio.h>
int main()
{
    int i ,j,n=7,a;
    for(i = 1; i <= 9; i = i+2)
    {
        for(a =1,j=n; a<= 3; j--,a++)
        {
            printf("I=%d J=%d\n",i,j);
        }
        n = n+2;
    }

    return 0;
}

