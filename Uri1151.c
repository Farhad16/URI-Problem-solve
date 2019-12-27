#include<stdio.h>
int main()
{
    int i,n,j,t=0,t1=1,t2;
    scanf("%d",&n);
    if(n>0 && n<46){
    for(i=0;i<n;i++){
        if(i==0)
        {
            t2 = i;
            printf("%d ",t2);
        }
        else if(i==1)
        {
            t2 = i;
            printf("%d",t2);
        }
        else
        {
            t2 = t+t1;
            t = t1;
            t1 = t2;
            printf(" %d",t2);
        }
    }
    printf("\n");
    }
    return 0;

}


