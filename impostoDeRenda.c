#include<stdio.h>

void main(){
	int contribuinte, CPF, nDependentes;
	float salario, imposto, salarioMinimo, nSalariosMinimos, aliquota;
	printf("Digite o valor atual do salario minimo:\n");
	scanf("%f",&salarioMinimo);
	for(contribuinte=1;contribuinte<=10;contribuinte++){
		printf("Digite seu CPF, o numero de dependentes e seu salario.\n");
		scanf("%d%d%f",&CPF,&nDependentes,&salario);
		salario -= nDependentes*(salario*0.05);
		nSalariosMinimos = salario/salarioMinimo;
		if(nSalariosMinimos<2){
			aliquota = 0;
		} else if (nSalariosMinimos<3){
			aliquota = 0.05;
		} else if(nSalariosMinimos<5){
			aliquota = 0.1;
		} else if(nSalariosMinimos<7){
			aliquota = 0.15;
		} else {
			aliquota = 0.2;
		}
		
		imposto = salario*aliquota;
		printf("Seu imposto e de R$%.2f.\n",imposto);
	}
}
