#include<stdio.h>

void main(){
	int numeroA, numeroB, multA=2, multB=2, valorA, valorB, MMC;
	printf("Digite dois numeros:\n");
	scanf("%d%d",&numeroA,&numeroB);
	valorA = numeroA;
	valorB = numeroB;
	while(numeroA!=numeroB){
		if(numeroA<numeroB){
			numeroA = valorA * multA;
			multA++;
		} else {
			numeroB = valorB * multB;
			multB++;
		}
	}
	MMC = numeroA;
	printf("O MMC de %d e %d e: %d", valorA, valorB, MMC);
}
