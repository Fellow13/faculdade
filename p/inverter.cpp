#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i, num[10], valor_inv, count = 0;
	float ma = 0;

	for (i = 0; i < 10; i++)
	{
		printf("Digite o valor %i. \n", i + 1);
		cin >> num[i];
	}

	printf("\n");

	for (i = 0; i < 10; i++)
	{
		printf("%i \t", num[i]);

		ma = (ma + num[i]);
	}

	printf("\n");

	for (i = 9; i >= 0; i--)
	{
		printf("%i \t", num[i]);
	}

	printf("\n");

	for (i = 0; i < 9; i++)
	{
		if (num[i] % 2 != 0)
		{
			valor_inv = num[i] * -1;
			printf("%i \t", valor_inv);
		}
	}

	printf("\n");

	printf("Media Aritimetica dos valores: %.1f \n", ma / 10);

	printf("\n");

	system("PAUSE");
	return 0;
}

