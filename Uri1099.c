#include <stdio.h>
int main()
{
    int num,sum=0;
    int i,j,x,y;
    scanf("%d\n",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            sum = 0;
            printf("%d\n",sum);
        }
        else if(x>y)
        {
            for(j=y+1;j<=x-1;j++)
            {
                if(j%2==1 || j%2==-1)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
            sum =0;
        }
        else
        {
            for(j=x+1;j<=y-1;j++)
            {
                if(j%2==1 || j%2==-1)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
        }
        sum = 0;
        }

    return 0;
}

