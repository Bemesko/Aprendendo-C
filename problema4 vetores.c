#include<stdio.h>
#define TAMC 6
#define TAML 6

void main(){
	int tabuleiro[TAML][TAMC], coluna, linha;
	int contZeros, menorLinha, maisZeros=0;
	for(linha=0;linha<TAML;linha++){
		contZeros = 0;
		for(coluna=0;coluna<TAMC;coluna++){
			tabuleiro[linha][coluna] = 2;
			while(tabuleiro[linha][coluna] != 0 && tabuleiro[linha][coluna] != 1 ){
				scanf("%d",&tabuleiro[linha][coluna]);
			}
			if(tabuleiro[linha][coluna]==0)
				contZeros++;
		}
		if(contZeros > maisZeros){
			maisZeros = contZeros;
			menorLinha = linha;
		}
	}
	printf("Linha com mais zeros: %d",menorLinha);
}
