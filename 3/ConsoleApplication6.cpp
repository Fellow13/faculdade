#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int years_old;
	printf("Digite sua idade. \n");
	scanf_s("%i", &years_old);

	int convert = years_old * 365;

	int year = convert / 365;
	int months = year * 12;
	int days = year * 365;

	printf("Sua idade em anos, meses e dias e de: %i, %i, %.2i \n", year, months, days);

	system("PAUSE");
	return 0;
}