#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int salario, quant_carros = 0, valorcarro = 0, comporcarro = 0, porcporcarro = 0, i;
	printf("Digite a quantidade de carros que foi vendido no mes. \n");
	cin >> quant_carros;

	salario = 937 * 2;

	printf("Verificacao do valor dos carros vendidos\n");

	for (i = 0; i < quant_carros; i++)
	{
		printf("Digite o valor do %i carro : \n", i + 1);
		cin >> valorcarro;

		porcporcarro = porcporcarro + (valorcarro * 0.05);
		comporcarro = comporcarro + 50;
		valorcarro = 0;
	}

	int valortotal = porcporcarro + comporcarro;

	printf("Seu salario com comissao e R$ %i \n", valortotal + salario);

	system("PAUSE");
    return 0;
}

