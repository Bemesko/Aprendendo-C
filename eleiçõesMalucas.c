#include<stdio.h>

void main(){
	int votos1=0, votos2=0, votos3=0, votos4=0, votosNulos=0, votosBrancos=0, votoLido=-1, votosTotais;
	float perc1=0, perc2=0, perc3=0, perc4=0, percNulos=0, percBrancos=0;
	while(votoLido!=0){
		scanf("%d",&votoLido);
		switch (votoLido){
			case 1:
			votos1++;
			votosTotais++;
			break;
			
			case 2:
			votos2++;
			votosTotais++;
			break;
			
			case 3:
			votos3++;
			votosTotais++;
			break;
			
			case 4:
			votos4++;
			votosTotais++;
			break;
			
			case 5:
			votosNulos++;
			votosTotais++;
			break;
			
			case 6:
			votosBrancos++;
			votosTotais++;
			break;
		}
	}
	perc1 = (100.0*votos1)/votosTotais;
	perc2 = (100.0*votos2)/votosTotais;
	perc3 = (100.0*votos3)/votosTotais;
	perc4 = (100.0*votos4)/votosTotais;
	percNulos = (100.0*votosNulos)/votosTotais;
	percBrancos = (100.0*votosBrancos)/votosTotais;
	printf("Candidato 1:\n\tVotos totais: %d \t Percentual dos Votos: %f\n",votos1, perc1);
	printf("Candidato 2:\n\tVotos totais: %d \t Percentual dos Votos: %f\n",votos2, perc2);
	printf("Candidato 3:\n\tVotos totais: %d \t Percentual dos Votos: %f\n",votos3, perc3);
	printf("Candidato 4:\n\tVotos totais: %d \t Percentual dos Votos: %f\n",votos4, perc4);
	printf("Votos Nulos:\n\tVotos totais: %d \t Percentual dos Votos: %f\n",votosNulos, percNulos);
	printf("Votos Brancos:\n\tVotos totais: %d \t Percentual dos Votos: %f\n",votosBrancos, percBrancos);
}
