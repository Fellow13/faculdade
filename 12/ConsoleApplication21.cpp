#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float altura, base, area;

	printf("Digite a base. \n");
	scanf_s("%f", &base);

	printf("Digite a altura. \n");
	scanf_s("%f", &altura);

	area = ((base * altura) / 2);

	printf("A area e de: %.5f \n", area);

	system("PAUSE");
	return 0;
}