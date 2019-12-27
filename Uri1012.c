#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,tri,rad,tra,squ,rec;
    scanf("%lf%lf%lf",&A,&B,&C);
    tri=(A*C)/2;
    rad=pi*(C*C);
    tra=((A+B)*C)/2;
    squ=B*B;
    rec=A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",rad);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",squ);
    printf("RETANGULO: %.3lf\n",rec);
    return 0;
}
