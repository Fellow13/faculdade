#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int impar = 1;
	int num;

	printf("Digite o numero: ");
	scanf_s("%i", &num);


	printf("Os %i primeiros impares sao:\n", num);

	while (i < num)
	{
		printf("%i | ", impar);
		impar = impar + 2;
		i = i + 1;

	}
}