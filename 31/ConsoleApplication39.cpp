#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	int i = 0, count = 0;
	int num[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Digite o valor %i. \n", i + 1);
		cin >> num[i];

		if (num[i] < 0)
		{
			count = count + 1;
		}
	}

	printf("Voce digitou %i valores negativos.", count);
}