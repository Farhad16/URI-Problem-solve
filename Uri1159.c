#include<stdio.h>
int main()
{
    int i,x,k=0;
    while(1)
    {
        scanf("%d",&x);
        if(x%2==0 && x!=0)
        {
            for(i=1;i<=5;i++)
            {
                k=k+x;
                x=x+2;
            }
                printf("%d\n",k);
                k=0;
        }
        else if(x%2!=0 && x!=0)
        {
            x++;
            for(i=1;i<=5;i++)
            {
                k=k+x;
                x=x+2;
            }
                printf("%d\n",k);
                k=0;
        }
        else
            {
                break;
            }
    }
}

