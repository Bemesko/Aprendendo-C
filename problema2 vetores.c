#include<stdio.h>

void main(){
	float salario[10], mediaSalario;
	int i;
	for(i=0;i<10;i++){
		scanf("%f",&salario[i]);
		mediaSalario += salario[i];
	}
	mediaSalario /= 10;
	for(i=0;i<10;i++){
		if(salario[i]>mediaSalario){
			printf("%.2f\n",salario[i]);
		}
	}
}
