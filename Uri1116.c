#include<stdio.h>
int main()
{
    int x,y,n;
    float result=0;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d%d",&x,&y);
        result = (float)x/y;

        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n",result);
        }
        n--;
    }
    return 0;
}
