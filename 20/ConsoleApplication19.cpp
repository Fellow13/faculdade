#include "stdafx.h"
#include <iostream>

int main()
{
	int matriz[2][2], i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matriz[i][j] = abs(matriz[i][j]);
			printf(" %i |", matriz[i][j]);
		}
		printf("\n");
	}

	printf("Matriz Positiva \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf(" %i |", matriz[i][j]);
		}
		printf(" \n");
	}

	system("PAUSE");
    return 0;
}

