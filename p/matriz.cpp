#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int matriz[3][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Digite o valor da linha %i da coluna %i: ", i + 1, j + 1);
			cin >> matriz[i][j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i | ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("%i ", matriz[0][0]);
	printf("%i ", matriz[1][1]);
	printf("%i ", matriz[2][2]);

	printf("\n");

	system("Pause");
	return 0;
}