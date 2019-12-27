#include<stdio.h>
int main()
{
    int i=0,n,sum=0;
    float avg;
    while(1)
    {
        scanf("%d",&n);
        if(n>0)
        {
            sum = (sum+n);
            i++;
            avg = (float)sum/i;
        }
        else{
            break;
        }
    }

    printf("%.2f\n",avg);
    return 0;

}



