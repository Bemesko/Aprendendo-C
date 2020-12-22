#include <stdio.h>

int main(){
    int precisao,i,divisor=1;
    double pi;
    scanf("%d",&precisao);//A precisão é a quantidade de vezes que o código vai fazer a conta, já que ele poderia fazer ela infinitamente se quisesse
    for(i=0;i<precisao;i++){//Implementação da série de Taylor
        pi = pi + 1.0/divisor;
        divisor+=2;
        pi = pi - 1.0/divisor;
        divisor+=2;
    }
    pi = 4*pi;//O resultado da série é pi/4
    printf("%.10f\n",pi);
}
