#include<stdio.h>
int main ()
{
    int a,b,x,y;
    float c,f,d,z,q;
    scanf ("%d%d%f",&a,&b,&c);
    scanf ("%d%d%f",&x,&y,&f);
    d=b*c;
    z=y*f;
    q=d+z;
    printf("VALOR A PAGAR: R$ %.2f\n",q);
    return 0;

}

