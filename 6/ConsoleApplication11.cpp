#include "pch.h"
#include <iostream>
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int calc(int num)
{
	int total;
	total = 0;

	if (num == 0)
	{
		return total;
	}
	else
	{
		return total = num + calc(num - 1);
	}

}

int main()
{
	int n;

	printf("Digite um numero inteiro e positivo. \n");
	scanf_s("%i", &n);

	int tot = calc(n);

	printf("A soma dos numeros e de %i \n", tot);

	system("pause");
	return 0;
}