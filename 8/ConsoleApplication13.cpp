#include "pch.h"
#include <iostream>
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int idade;

	printf("Digite a idade do nadador. \n");
	scanf_s("%i", &idade);

	if ((idade >= 5) && (idade <= 7))
	{
		printf("Infantil A. \n");
	}
	else if ((idade >= 8) && (idade <= 10))
	{
		printf("Infantil B. \n");
	}
	else if ((idade >= 11) && (idade <= 13))
	{
		printf("Juvenil A. \n");
	}
	else if ((idade >= 14) && (idade <= 17))
	{
		printf("Juvenil B. \n");
	}
	else if (idade >= 18)
	{
		printf("Adulto. \n");
	}
	else
	{
		printf("Idade incorreta. \n");
	}

	system("PAUSE");
	return 0;
}