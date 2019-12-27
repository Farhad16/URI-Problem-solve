#include<stdio.h>
int main()
{
   int i,n;
char c;
scanf("%d",&n);
for(i=1;i<=n*4;i++)
{
    if(i%4==0){
        printf("PUM\n");
        continue;
    }
    else
        printf("%d ",i);
}

return 0;
}

