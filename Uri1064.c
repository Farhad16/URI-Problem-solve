#include<stdio.h>
int main()
{
    float a,b = 0,ave = 0;
    int i,temp = 0;
    for(i = 1; i<= 6; i++){
        scanf("%f",&a);
        if(a > 0){
            temp = temp+1;
            b = b+a;
        }
    }
    ave = b/temp;
    printf("%d valores positivos\n",temp);
    printf("%.1f\n",ave);
}
