#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float nt1, nt2, nt3, mp, mf;

	printf("Digite o valor da nota 1. \n");
	scanf_s("%f", &nt1);

	printf("Digite o valor da nota 2. \n");
	scanf_s("%f", &nt2);

	printf("Digite o valor da nota 3. \n");
	scanf_s("%f", &nt3);

	float p1 = 2.3;
	float p2 = 5;
	float p3 = 6;

	mp = ((p1 * nt1 + p2 * nt2 + p3 * nt3) / p1 + p2 + p3);
	mf = ((nt1 + nt2 + nt3) / 3);

	printf("Sua media ponderada e de: %.2f , com media final de: %.2f \n", mp, mf);

	system("PAUSE");
	return 0;

}