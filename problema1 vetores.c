#include<stdio.h>

void main(){
	int valores[15], i;
	for(i=0;i<15;i++){
		scanf("%d",&valores[i]);
	}
	for(i=0;i<15;i++){
		if(valores[i]%2==0){
			printf("%d ",valores[i]);
		}
	}
}
