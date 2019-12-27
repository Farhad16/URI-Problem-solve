#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a = a*60+b;
    c = c*60+d;
    if(a<c){
        b = c - a;
        if(b>60){
            e = b/60;
            d = b%60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,d);
        }
        else{
            d = b/60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d,b);
        }
    }
    else if(a>c){
        b = (c+1440) - a;
        e = b/60;
        d = b%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,d);
    }
    else{
        b = c+1440 - a;
        e = b/60;
        d = (c+1440) - (a+1440);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,d);
    }

}

