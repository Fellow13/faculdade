#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int x, n, potencia, contador;

	printf("Digite um numero inteiro: \n");
	scanf_s("%i", &x);
	printf("Digite um numero um inteiro nao-negativo: \n");
	scanf_s("%i", &n);

	potencia = 1;
	contador = 0;

	while (contador != n) {
		potencia = potencia * x;
		contador = contador + 1;
	}

	printf("O valor de %i elevado a %i e de: %i\n", x, n, potencia);

	system("PAUSE");
	return 0;
}