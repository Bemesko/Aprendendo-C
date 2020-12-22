#include <stdio.h>
int linhas;
int colunas;

void scanMat(int matriz[linhas][colunas]){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("Digite o elemento da linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
}

void printMat(int matriz[linhas][colunas]){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
}

void main(){
	printf("Digite o numero de linhas e colunas da matriz:\n");
	scanf("%d%d",&linhas,&colunas);
	int matriz[linhas][colunas];
	scanMat(matriz);
	printMat(matriz);
}
