#include<stdio.h>
int main(){
    float salary,bonus,earn;
    scanf("%f",&salary);
    if(salary >= 0.00 && salary <= 400.00){
        bonus = salary + ((salary*15)/100);
        earn = bonus - salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",bonus,earn);
    }
    else if(salary >= 400.01 && salary <= 800.00){
        bonus = salary+((salary*12)/100);
        earn = bonus - salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",bonus,earn);
    }
    else if(salary >= 800.01 && salary <= 1200.00){
        bonus = salary+((salary*10)/100);
        earn = bonus - salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",bonus,earn);
    }
    else if(salary >= 1200.01 && salary <= 2000.00){
        bonus = salary+((salary*7)/100);
        earn = bonus - salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",bonus,earn);
    }
    else{
        bonus = salary+((salary*4)/100);
        earn = bonus - salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",bonus,earn);
    }

    return 0;
}
