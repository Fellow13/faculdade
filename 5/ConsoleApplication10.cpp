#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float vehicle_price;

	printf("Digite o valor de fabrica do veiculo. \n");
	scanf_s("%f", &vehicle_price);

	float imp_distribuidor = ((0.28 * vehicle_price) / 100);
	float impostos = ((0.45 * vehicle_price) / 100);
	float fullPrice = (vehicle_price + imp_distribuidor + impostos);

	printf("Impostos do distribuidor sera de R$%.2f \n", imp_distribuidor);
	printf("Impostos de R$%.2f \n", impostos);
	printf("Preco do veiculo de R$%.2f \n", vehicle_price);

	printf("Preco total sera de: R$%.2f \n", fullPrice);

	system("PAUSE");
	return 0;
}
