#include "pch.h"
#include <iostream>

int main()
{
	int valor;

	printf("Digite um numero entre 2 e 20. \n");
	scanf_s("%i", &valor);

	if ((valor < 2) && (valor > 20))
	{
		printf("Valores incorretos. \n");
	}
	else
	{
		printf("%i \n", valor);
		printf("%i %i \n", valor, valor + 1);
		printf("%i %i %i \n", valor, valor + 1, valor + 2);
		printf("%i %i %i %i \n", valor, valor + 1, valor + 2, valor + 3);
		printf("%i %i %i \n", valor, valor + 1, valor + 2);
		printf("%i %i \n", valor, valor + 1);
		printf("%i \n", valor);
	}
}