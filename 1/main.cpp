#include "pch.h"
#include <iostream>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

float calc(float x1, float x2, float y1, float y2)
{
	float result;

	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return result;
}

int main()
{
	float x1, x2, y1, y2;

	printf("Digite o valor de x1. \n");
	scanf("%f", x1);

	printf("Digite o valor de x1. \n");
	scanf("%f", x2);

	printf_s("Digite o valor de x1. \n");
	scanf("%f", y1);

	printf_s("Digite o valor de x1. \n");
	scanf("%f", y2);

	float result = calc(x1, x2, y1, y2);

	printf("%f \n", result);

	system("PAUSE");
	return 0;
}
