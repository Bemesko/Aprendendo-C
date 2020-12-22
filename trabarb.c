#include <stdio.h>
#define TAM 5

int main(){
    int i;
    double salario[TAM] , media = 0, soma=0;
    for (i=0; i<TAM; i++){
    	scanf("%lf",&salario[i]);
    	soma = soma + salario[i];
    	printf("%lf %lf %d", salario[i], soma, i);
    }
	media = soma/TAM;
	printf("%d", media);
    for (i=0; i<TAM; i++){
        if (salario[i]>media)
            printf (" opa %d\n",salario[i]);
    }   
}
