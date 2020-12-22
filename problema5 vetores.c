#include<stdio.h>

void main(){
	int alunos;
	printf("Digite o numero de alunos...\n");
	scanf("%d",&alunos);
	int tabela[alunos][3], media,i;
	char situacao[alunos];	
	for(i=0;i<alunos;i++){
		printf("Digite as notas...\n");
		scanf("%d%d",&tabela[i][0],&tabela[i][1]);
		tabela[i][2] = (tabela[i][0] + tabela[i][1])/2;
		if(tabela[i][2]>=60){
			situacao[i] = 'A';
		} else{
			situacao[i] = 'R';
		}
	}
	printf("Nota 1\tNota 2\tMedia\tSituacao\n");
	for(i=0;i<alunos;i++){
		printf("%d    \t%d    \t%d   \t%c      \n",tabela[i][0], tabela[i][1], tabela[i][2], situacao[i]);
	}
}
