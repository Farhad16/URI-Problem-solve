#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x<=0||y<=0)
            break;
        else{
            if(x>y){
                for(i=y;i<=x;i++)
                {
                    sum = sum+i;
                    printf("%d ",i);
                }
                printf("Sum=%d\n",sum);
                sum = 0;
                continue;
            }
            else
                for(i=x;i<=y;i++)
                {
                    sum = sum+i;
                    printf("%d ",i);
                }
                printf("Sum=%d\n",sum);
                sum = 0;
                continue;

            }
    }
    return 0;

}
