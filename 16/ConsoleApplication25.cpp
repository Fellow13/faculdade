#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<conio.h>

bool search(char vet[], char letra)
{
	for (int i = 0; i < strlen(vet); i++)
	{
		if (tolower(vet[i]) == tolower(letra))
		{
			printf("%i \n", i + 1);
			return true;
		}
	}

	return false;
}

int main()
{
	char palavra[30] = "charles";
	char texto[30];

	printf("Digite uma palavra: \n");
	scanf_s("%c", &texto);

	if (search(palavra, 'e'))
	{
		printf("Letra encontrada \n");
	}
	else
	{
		printf("Letra nao encontrada. \n");
	}

	system("PAUSE");
	return(0);
}