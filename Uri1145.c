#include <stdio.h>
int main()
{
    int X,Y,z,i,a=0;
    scanf("%d%d", &X,&Y);
    for(i=1; i<=Y; i++)
    {
        a++;
        if(a==X) printf("%d",i);
        else printf("%d ", i);
        if(a==X)
        {
            a=0;
            printf("\n");
        }
    }
    return 0;
}
