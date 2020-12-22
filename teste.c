#include<stdio.h>
#define TAM 12
void main() {
int i, j, idades[TAM], auxiliar;
for (i = 0; i < TAM; i++) {
printf("Entre com uma idade: ");
scanf("%d", &idades[i]);
if (idades[i] > 18)
printf("[%d]", idades[i]);
}
for (i = 0; i < TAM - 1; i++) {
for (j = i + 1; j < TAM; j++) {
if (idades[i] > idades[j]){
auxiliar = idades[i];
idades[i] = idades[j];
idades[j] = auxiliar;
}
}
}
for (i = 0; i < TAM; i++) {
printf("[%d]", idades[i]);
}
}
