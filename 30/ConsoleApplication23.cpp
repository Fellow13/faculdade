#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	int num = 0;
	int j = 0, i = 0, k = 0;

	printf("Digite valor de 2 a 20. \n");
	cin >> n;

	while ((n < 2) || (n > 20))
	{
		printf("Numero Incorreto, favor digitar um numero entre 2 e 20. \n");
		cin >> n;
	}

	for (i = 0; i < n; i++)
	{
		k = 1;
		for (j = 0; j < n; j++)
		{
			if (j <i)
			{
				printf("X");
			}
			else
			{
				printf("%i", k);
				k = k + 1;
			}

		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}