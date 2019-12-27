
#include<stdio.h>
int main()
{
    int N[100],i;
    double y;
    scanf("%lf",&y);
    for(i= 0;i < 100 ;i++){
        printf("N[%d] = %.4lf\n",i,y);
        y = y/2;
    }
  return 0;
}

