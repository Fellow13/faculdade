#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int idade = 1, maioridade = 0, cont = 0, opsexo, opcabelo, opolhos = 0;
	printf("Digite idade -1 para encerrar o programa.\n");

	while (idade > 0)
	{
		printf("Digite a sua idade. \n");
		cin >> idade;
		
		if (idade < 0)
		{
			break;
			system("cls");
		}

		printf("Digite \n | 1 - Masculino | \n ou \n | 2 - Feminino | \n");
		cin >> opsexo;

		printf("Selecione a cor dos olhos \n1-azuis \n2-verdes \n3-castanhos \n");
		cin >> opolhos;
		printf("\n");

		printf("Selecione a cor do cabelo \n1-louros \n2-castanhos \n3-pretos \n");
		cin >> opcabelo;

		if (idade > maioridade)
		{
			maioridade = idade;
		}
		if ((opsexo == 2) && (idade >= 18) && (idade <= 35) && (opolhos == 2) && (opcabelo == 1))
		{
			cont++;
		}
		printf("Informacoes guardadas. \n");
		system("pause");
		system("cls");

	}

	printf("A maior idade e %i \n A quantidade de mulheres de idade 18 a 35 de olhos verdes e cablos louros e de %i ", maioridade, cont);

	system("pause");
	return 0;

}