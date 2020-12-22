#include<stdio.h>

void main(){
	int numeroAtual=0, maiorNumero=0, menorNumero=0;
	while(numeroAtual!=-1){
		scanf("%d",&numeroAtual);
		if(numeroAtual!=-1){
			if(numeroAtual > maiorNumero){
				maiorNumero = numeroAtual;
			}
			if(numeroAtual < menorNumero){
				menorNumero = numeroAtual;
			}
		}
	}
	printf("O maior numero e: %d\n",maiorNumero);
	printf("O menor numero e: %d\n",menorNumero);
}
