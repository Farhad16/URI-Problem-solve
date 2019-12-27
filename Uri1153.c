#include<stdio.h>
int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    if(n>0 && n<13){
    for(i=n;i>1;i--)
        {
          if(n>0)
          {
              sum = sum*i;
          }
        }
            printf("%d\n",sum);
    }

    return 0;

}



