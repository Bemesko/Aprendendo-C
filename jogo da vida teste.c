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
void printMat(int matriz[][TAM]){//Fun��o de mostrar a matriz na tela
        int i, j;
        for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                        printf("[%d]",matriz[i][j]);
                }
                printf("\n");
        }
        printf("\n");
}
void scanMat(int matriz[][TAM]){//Fun��o de ler o estado inicial  da matriz
        int i,j, novoValor=2;
        for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                	printf("cu");
                        if(novoValor != -1){
                                while(novoValor != -1 && novoValor != 0 && novoValor != 1){//Garantir que os �nicos valores aceitos sejam 0, 1 ou -1
                                        printf("Digite um valor para o bloco da linha %d e coluna %d", i, j);
                                        printf("\n Para encerrar a digita��o, digite -1.\n");
                                        scanf("%d",&novoValor);
                                }
                                if(novoValor == 0 || novoValor == 1){
                                        matriz[i][j] = novoValor;
                                        novoValor = 2;//2 � um n�mero qualquer que n�o vai fazer nada (1, 0 e -1 fazem)
                                } else {
                                        matriz[i][j] = 0;
                                }
                                printMat(matriz);//Isso mostra a matriz na tela toda vez que um elemento for lido
                        }
                }
        }
}
void zerarMat(int matriz[][TAM]){//Isso zera a matriz no come�o
        int i, j;
        for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                        matriz[i][j] = 0;
                }
        }
}

int compMats(int matrizA[][TAM], int matrizB[][TAM]){
        int i, j, matrizesIguais = 1;//Se for 1, s�o iguais
        for(i=0;i<TAM;i++){
            for(j=0;j<TAM;j++){
                if(matrizA[i][j] != matrizB[i][j]){
                    matrizesIguais = 0;//Se for 0, s�o diferentes
                }
            }
        }
        return matrizesIguais;
}

int somarVizinhos(int matriz[][TAM], int i, int j){
        int somaVizinhos, k, l;
		if(i==0){//Elemento est� na primeira linha
                if (j==0){//Elemento est� na primeira linha e na primeira colunai=0j=0
           somaVizinhos = matriz[TAM-1][TAM-1] + matriz[TAM-1][0] + matriz[TAM-1][1]
                 + matriz[0][TAM-1] + matriz[0][1] 
                 + matriz[1][TAM-1] + matriz[1][0] + matriz[1][1];
                }else if(j==TAM-1){//Elemento est� na primeira linha e na �ltima coluna
                       somaVizinhos = matriz[TAM-1][TAM-2] + matriz[TAM-1][TAM-1] + matriz[TAM-1][0] + matriz[0][TAM-2] + matriz[0][0] + matriz[1][TAM-2] + matriz[1][TAM-1] + matriz[1][0];
                }else{ //Elemento est� na primeira linha e numa coluna que n�o � importante
                       somaVizinhos = matriz[TAM-1][j-1] + matriz[TAM-1][j] + matriz[TAM-1][j+1] + matriz[0][j-1] + matriz[0][j+1] + matriz[1][j-1] + matriz[1][j] + matriz[1][j+1];
                }
        } else if(i==TAM-1){//Elemento est� na �ltima linha
                if (j==0){//Elemento est� na �ltima linha e na primeira coluna
                       somaVizinhos = matriz[TAM-2][TAM-1] + matriz[TAM-2][0] + matriz[TAM-2][1] + matriz[TAM-1][TAM-1] + matriz[TAM-1][1] + matriz[0][TAM-1] + matriz[0][0] + matriz[0][1];
                } else if(j==TAM-1){//Elemento est� na �ltima linha e na �ltima coluna
                       somaVizinhos = matriz[TAM-2][TAM-2] + matriz[TAM-2][TAM-1] + matriz[TAM-2][0] + matriz[TAM-1][TAM-2] + matriz[TAM-1][0] + matriz[0][TAM-1] + matriz[0][TAM-1] + matriz[0][0];
                } else {//Elemento est� na �ltima linha e numa coluna que n�o � importante
                       somaVizinhos = matriz[TAM-2][j-1] + matriz[TAM-2][j] + matriz[TAM-2][j+1] + matriz[TAM-1][j-1] + matriz[TAM-1][j+1] + matriz[0][j-1] + matriz[0][j] + matriz[0][j+1];
                }
        } else {//Elemento n�o est� em uma linha importante
                if (j==0){//Elemento est� numa linha irrelevante e na primeira coluna
                       somaVizinhos = matriz[i-1][TAM-1] + matriz[i-1][0] + matriz[i-1][1] + matriz[i][TAM-1] + matriz[i][1] + matriz[i+1][TAM-1] + matriz[i+1][0] + matriz[i+1][1];
                } else if(j==TAM-1){//Elemento est� numa linha irrelevante e na �ltima coluna
                       somaVizinhos = matriz[i-1][TAM-2] + matriz[i-1][TAM-1] + matriz[i-1][0] + matriz[i][TAM-2] + matriz[i][0] + matriz[i+1][TAM-2] + matriz[i+1][TAM-1] + matriz[i+1][0];
                } else {//Elemento est� n�o est� em uma linha ou coluna importante
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
                        case 0 ... 1: //Qualquer c�lula viva com menos de dois vizinhos vivos morre de solid�o.
                        matriz[i][j] = 0;
                        break;
                        case 3: //Qualquer c�lula com exatamente tr�s vizinhos vivos se torna uma c�lula viva.
                        matriz[i][j] = 1;
                        break;
                        case 4 ... 8: //Qualquer c�lula viva com mais de tr�s vizinhos vivos morre de superpopula��o
                        matriz[i][j] = 0;
                        break;
                		}
       				}
				}
			}
