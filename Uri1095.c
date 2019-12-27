#include<stdio.h>
int main()
{
    int i ,j = 65;
    for(i = 1; i <= 37; i = i+3)
    {
        j = j-5;
        printf("I=%d J=%d\n",i,j);
    }

    return 0;
}
