#include<stdio.h>
#define tamanho 6

void main(){
	int i, j, idades[tamanho], aux, quantMaiores=0;
	for(i=0;i<tamanho;i++){
		scanf("%d",&idades[i]);
		if(idades[i]>=18){
			quantMaiores++;
		}
	}
	for(i=0;i<tamanho-1;i++){
		for(j=i+1;j<tamanho;j++){
			if(idades[i]>idades[j]){
				aux = idades[i];
				idades[i] = idades[j];
				idades[j] = aux;
			}
		}
	}
	for(i=0;i<tamanho;i++){
		printf("%d ",idades[i]);
	}
	printf("\nQuantidade de pessoas maiores de idade: %d",quantMaiores);
}
