#include<stdio.h>

void main(){
	int idade, quantidadeA=0, quantidadeD=0, maiorIdadeA=0, maiorIdadeD=0, maiorIdadeE=0, diferencaAD=0, i;
	char opiniao;
	float percB=0, percC=0, percE=0, mediaD=0, diferencaBC=0;
	for(i=1;i<=100;i++){
		printf("Idade: \n");
		scanf("%d",&idade);
		fflush(stdin);
		printf("Opinião: \n");
		scanf("%c",&opiniao);
		switch (opiniao){
			case 'A':
			quantidadeA++;
			if(idade>maiorIdadeA){
				maiorIdadeA = idade;
			}
			break;
			
			case 'B':
			percB += 1;
			break;
			
			case 'C':
			percC += 1;
			break;
			
			case 'D':
				quantidadeD += 1;
				mediaD += idade;
				if(idade > maiorIdadeD){
					maiorIdadeD = idade;
				}
				
			break;
			
			case 'E':
			percE += 1;
			if(idade>maiorIdadeE){
				maiorIdadeE = idade;
			}
			break;
		}
	}
	diferencaBC = percB - percC;
	diferencaAD = maiorIdadeA - maiorIdadeD;
	if(quantidadeD != 0){
		mediaD /= quantidadeD*1.0;
	} else {
		mediaD = 0;
	}
	printf("Quantidade de respostas 'Otimo': %d\n",quantidadeA);
	printf("Diferenca entre Bom e Regular: %f\%\n",diferencaBC);
	printf("Media de idade de respostas 'Ruim': %f\n",mediaD);
	printf("Percentagem de 'Pessimo': %f\%, Maior idade que respondeu: %d\n",percE,maiorIdadeE);
	printf("Diferenca de idade entre maior 'Otimo' e maior 'Ruim': %d",diferencaAD);
}
