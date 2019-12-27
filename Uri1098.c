
#include<stdio.h>
int main()
{
    float i ,j,a,e=0;
    int k;
    for(i=0;i<=1.9;i=i+.2)
    {
        for(j=1;j<=3;j++)
        {
            e = j+i;
            if(i==0.0||i==1.0)
                printf("I=%.0f J=%.0f\n",i,e);
            else if(e==3.0||e==4.0||e==5.0)
                printf("I=%.0f J=%.0f\n",i,e);
            else
                printf("I=%.1lf J=%.1lf\n",i,e);
        }
    }
    for(k = 3;k<=5;k++)
    {
        printf("I=2 J=%d\n",k);
    }
    return 0;
}

