#include "pch.h"
#include <iostream>
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int opcao;
	float nt1, nt2, nt3, ma, p, harm, media_final;

	printf("Digite a nota 1. \n");
	scanf_s("%f", &nt1);

	printf("Digite a nota 2. \n");
	scanf_s("%f", &nt2);

	printf("Digite a nota 3. \n");
	scanf_s("%f", &nt3);

	printf("Digite a opcao desejada de media | 1 - Aritimetica | 2 - Ponderada | 3 - Harmonica | \n");
	scanf_s("%i", &opcao);

	if (opcao == 1)
	{
		ma = ((nt1 + nt2 + nt3) / 3);
		media_final = ma;
	}
	else if (opcao == 2)
	{
		float p1 = 3;
		float p2 = 3;
		float p3 = 4;

		p = ((p1 * nt1 + p2 * nt2 + p3 * nt3) / (p1 + p2 + p3));

		media_final = p;
	}
	else if (opcao == 3)
	{
		harm = (((1 / nt1) + (1 / nt2) + (1 / nt3)) / 3);

		media_final = harm;
	}
	else
	{
		printf("Opcao incorreta. \n");
	}

	printf("%.2f \n", media_final);

	system("PAUSE");
	return 0;
}