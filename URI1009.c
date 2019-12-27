#include<stdio.h>
int main()
{
    char name[50];
    double salary,bonus,total,extra;
    scanf ("%s",&name);
    scanf ("%lf%lf",&salary,&bonus);
    extra=(bonus*15)/100;
    total=salary+extra;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
