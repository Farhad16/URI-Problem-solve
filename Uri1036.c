#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C;
    float p,q,R1,R2;
    scanf("%f%f%f",&A,&B,&C);
    p=((B*B)-(4*A*C));
    q= sqrt(p);
    if (A!=0 && q>0){
        R1 = -B+sqrt(p);
        R1 = R1/(2*A);
        R2 = -B-sqrt(p);
        R2 = R2/(2*A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else
        printf("Impossivel calcular\n");
    return 0;

}
