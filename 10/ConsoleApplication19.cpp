#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int cod, quantidade;
	float preco, valor_final;

	printf("Digite o codigo do produto. \n");
	scanf_s("%i", &cod);

	printf("Digite a quantidade que deseja comprar. \n");
	scanf_s("%i", &quantidade);

	if (cod == 1001)
	{
		preco = 5.32;
		valor_final = quantidade * preco;
	}
	else if (cod == 1324)
	{
		preco = 6.45;
		valor_final = quantidade * preco;
	}
	else if (cod == 6548)
	{
		preco = 2.37;
		valor_final = quantidade * preco;
	}
	else if (cod == 987)
	{
		preco = 5.32;
		valor_final = quantidade * preco;
	}
	else if (cod == 7623)
	{
		preco = 6.45;
		valor_final = quantidade * preco;
	}

	printf("| Codigo: %i, quantidade: %i, TOTAL: R$%.2f |\n", cod, quantidade, valor_final);

	system("PAUSE");
	return 0;
}