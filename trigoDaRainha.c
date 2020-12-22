#include<stdio.h>

void main(){
	long long int soma=0;
	int i;
	double peso=0;
	for (i=0;i<=63;i++){
    	soma+=soma;    
    	if(i==1){
			soma=1;
		}
    	}
	printf("O pagamento foi de %lli graos.", soma);
	}
