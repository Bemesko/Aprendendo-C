#include<stdio.h>
#define TAM 5 //Esse valor vai ser o tamanho da matriz que a gente vai usar
void printMat(int matriz[][TAM]);
void scanMat(int matriz[][TAM]);
void zerarMat(int matriz[][TAM]);
int compMats(int matrizA[][TAM], int matrizB[][TAM]);
int somarVizinhos(int matriz[][TAM], int i, int j);
void novaGeracao(int matriz[][TAM], int matrizAnterior[][TAM]);

int main(){
        int mundo[TAM][TAM], estadoAnterior[TAM][TAM];
        zerarMat(mundo);
        scanMat(mundo);
        printf("a");
}
void printMat(int matriz[][TAM]){//Função de mostrar a matriz na tela
        int i, j;
        for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                        printf("[%d]",matriz[i][j]);
                }
                printf("\n");
        }
        printf("\n");
}
void scanMat(int matriz[][TAM]){//Função de ler o estado inicial  da matriz
        int i,j, novoValor=2;
        for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                	printf("cu");
                        if(novoValor != -1){
                                while(novoValor != -1 && novoValor != 0 && novoValor != 1){//Garantir que os únicos valores aceitos sejam 0, 1 ou -1
                                        printf("Digite um valor para o bloco da linha %d e coluna %d", i, j);
                                        printf("\n Para encerrar a digitação, digite -1.\n");
                                        scanf("%d",&novoValor);
                                }
                                if(novoValor == 0 || novoValor == 1){
                                        matriz[i][j] = novoValor;
                                        novoValor = 2;//2 é um número qualquer que não vai fazer nada (1, 0 e -1 fazem)
                                } else {
                                        matriz[i][j] = 0;
                                }
                                printMat(matriz);//Isso mostra a matriz na tela toda vez que um elemento for lido
                        }
                }
        }
}
void zerarMat(int matriz[][TAM]){//Isso zera a matriz no começo
        int i, j;
        for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                        matriz[i][j] = 0;
                }
        }
}

int compMats(int matrizA[][TAM], int matrizB[][TAM]){
        int i, j, matrizesIguais = 1;//Se for 1, são iguais
        for(i=0;i<TAM;i++){
            for(j=0;j<TAM;j++){
                if(matrizA[i][j] != matrizB[i][j]){
                    matrizesIguais = 0;//Se for 0, são diferentes
                }
            }
        }
        return matrizesIguais;
}

int somarVizinhos(int matriz[][TAM], int i, int j){
        int somaVizinhos, k, l;
		if(i==0){//Elemento está na primeira linha
                if (j==0){//Elemento está na primeira linha e na primeira colunai=0j=0
           somaVizinhos = matriz[TAM-1][TAM-1] + matriz[TAM-1][0] + matriz[TAM-1][1]
                 + matriz[0][TAM-1] + matriz[0][1] 
                 + matriz[1][TAM-1] + matriz[1][0] + matriz[1][1];
                }else if(j==TAM-1){//Elemento está na primeira linha e na última coluna
                       somaVizinhos = matriz[TAM-1][TAM-2] + matriz[TAM-1][TAM-1] + matriz[TAM-1][0] + matriz[0][TAM-2] + matriz[0][0] + matriz[1][TAM-2] + matriz[1][TAM-1] + matriz[1][0];
                }else{ //Elemento está na primeira linha e numa coluna que não é importante
                       somaVizinhos = matriz[TAM-1][j-1] + matriz[TAM-1][j] + matriz[TAM-1][j+1] + matriz[0][j-1] + matriz[0][j+1] + matriz[1][j-1] + matriz[1][j] + matriz[1][j+1];
                }
        } else if(i==TAM-1){//Elemento está na última linha
                if (j==0){//Elemento está na última linha e na primeira coluna
                       somaVizinhos = matriz[TAM-2][TAM-1] + matriz[TAM-2][0] + matriz[TAM-2][1] + matriz[TAM-1][TAM-1] + matriz[TAM-1][1] + matriz[0][TAM-1] + matriz[0][0] + matriz[0][1];
                } else if(j==TAM-1){//Elemento está na última linha e na última coluna
                       somaVizinhos = matriz[TAM-2][TAM-2] + matriz[TAM-2][TAM-1] + matriz[TAM-2][0] + matriz[TAM-1][TAM-2] + matriz[TAM-1][0] + matriz[0][TAM-1] + matriz[0][TAM-1] + matriz[0][0];
                } else {//Elemento está na última linha e numa coluna que não é importante
                       somaVizinhos = matriz[TAM-2][j-1] + matriz[TAM-2][j] + matriz[TAM-2][j+1] + matriz[TAM-1][j-1] + matriz[TAM-1][j+1] + matriz[0][j-1] + matriz[0][j] + matriz[0][j+1];
                }
        } else {//Elemento não está em uma linha importante
                if (j==0){//Elemento está numa linha irrelevante e na primeira coluna
                       somaVizinhos = matriz[i-1][TAM-1] + matriz[i-1][0] + matriz[i-1][1] + matriz[i][TAM-1] + matriz[i][1] + matriz[i+1][TAM-1] + matriz[i+1][0] + matriz[i+1][1];
                } else if(j==TAM-1){//Elemento está numa linha irrelevante e na última coluna
                       somaVizinhos = matriz[i-1][TAM-2] + matriz[i-1][TAM-1] + matriz[i-1][0] + matriz[i][TAM-2] + matriz[i][0] + matriz[i+1][TAM-2] + matriz[i+1][TAM-1] + matriz[i+1][0];
                } else {//Elemento está não está em uma linha ou coluna importante
                       somaVizinhos = matriz[i-1][j-1] + matriz[i-1][j] + matriz[i-1][j+1] + matriz[i][j-1] + matriz[i][j+1] + matriz[i+1][j-1] + matriz[i+1][j] + matriz[i+1][j+1];
                }
        }
        return somaVizinhos;
}

void novaGeracao(int matriz[][TAM], int matrizAnterior[][TAM]){
        int i, j;
        for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                        matrizAnterior[i][j] = matriz [i][j];
                        switch(somarVizinhos(matriz, i, j)){
                        case 0 ... 1: //Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.
                        matriz[i][j] = 0;
                        break;
                        case 3: //Qualquer célula com exatamente três vizinhos vivos se torna uma célula viva.
                        matriz[i][j] = 1;
                        break;
                        case 4 ... 8: //Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação
                        matriz[i][j] = 0;
                        break;
                		}
       				}
				}
			}
