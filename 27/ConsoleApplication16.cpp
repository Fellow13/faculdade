#include "stdafx.h"
#include <iostream>

using namespace std;

void calculonotas(int valorcompra, int valordinheiro)
{
	

}

int main()
{
	int valorcompra, valoremdinheiro, a, troco;

	printf("Digite o valor da compra. \n");
	cin >> valorcompra;
	printf("Digite o valor em dinheiro. \n");
	cin >> valoremdinheiro;

	troco = valoremdinheiro - valorcompra;
	int nota100 = 0;
	int nota10 = 0;
	int nota1 = 0;

	if (troco > 0)
	{
		nota100 = (troco - (troco % 100)) / 100;
		nota10 = (troco % 100) / 10;
		nota1 = (troco % 10);

		printf("Notas de 100 : %i \n Notas de 10 : %i \n Notas de 1: %i \n", nota100, nota10, nota1);
	}
	else
	{
		printf("Faltando valor em dinheiro, favor conferir. \n");
	}

	system("pause");
	return 0;
}