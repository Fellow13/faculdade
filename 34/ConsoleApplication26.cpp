#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num = 0, i, maiorv = 0, menorv = 99999999;

	for (i = 0; i < 3; i++)
	{
		printf("Digite o %i valor. \n", i + 1);
		cin >> num;
		
		printf("\n");

		if (num > maiorv)
		{
			maiorv = num;
		}

		if (num < menorv)
		{
			menorv = num;
		}

	}
	printf("Maior valor e %i \n Menor valor e %i \n", maiorv, menorv);

	system("pause");
	return 0;
}