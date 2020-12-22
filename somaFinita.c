/*
Faça um programa que calcule e exiba o resultado da seguinte soma:
SOMA = 1/1 + 3/2 + 5/3 + 7/4 + … + 99/50.
*/

#include <stdio.h>

void main()
{
	double H = 0;
	float numerador = 1, denominador = 1;
	while (numerador <= 99)
	{
		H += numerador / denominador;
		numerador += 2;
		denominador++;
	}
	printf("%lf", H);
}
