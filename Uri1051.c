#include<stdio.h>
int main(){
    float salary,c;
    scanf("%f",&salary);
    if(salary >= 0.00 && salary <= 2000.00){
        printf("Isento\n");
    }
    else if(salary >= 2000.01 && salary <= 3000.00){
        salary -= 2000;
        c = (salary/100)*8;
        printf("R$ %.2f\n",c);
    }
    else if(salary >= 3000.01 && salary <= 4500.00){
        salary -= 3000;
        c = (salary/100)*18+80.00;
        printf("R$ %.2f\n",c);
    }
    else
    {
        salary -= 4500;
        c = (salary/100)*28+350.00;
        printf("R$ %.2f\n",c);
    }
    return 0;
}
