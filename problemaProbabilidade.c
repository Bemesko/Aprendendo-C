/*
**O Problema**

Se eu apertar um botão 45 vezes, e esse botão tem 12,5% de chance de fazer algo acontecer, qual a probabilidade da coisa acontecer no total?

Se você aperta o botão e a coisa acontece, você continua apertando o botão.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int vezesApertadas,posicao;
    double valorTotal,probabilidade;
    printf("Digite quantas vezes o botão foi apertado:\n");
    scanf("%d",&vezesApertadas);
    printf("Digite a probabilidade da coisa acontecer (em porcentagem):\n");
    scanf("%lf",&valorTotal);
    valorTotal = 100/valorTotal;
    for(posicao=1;posicao<=vezesApertadas;posicao++){
        probabilidade = probabilidade + pow(valorTotal-1,posicao-1)*(1/pow(valorTotal,posicao));
    }
    printf("%.10f por cento de chance da coisa acontecer.\n",probabilidade*100);
}
