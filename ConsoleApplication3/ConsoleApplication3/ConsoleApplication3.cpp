// ConsoleApplication3.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int i = 0;
int table[5];

int main()
{
	
	for (int i = 0; i < 5; i++)
	{
		printf_s("Digite um numero. \n");
		scanf_s("%i", &table[i]);
	}

	if (table[4] > table[3]) {
		if (table[3] > table[2]) {
			if (table[2] > table[1]) {
				if (table[1] > table[0]) {
					printf_s("Estavam em ordem crescente. \n");
				}
			}
		}
	}

	system("PAUSE");
    return 0;
}

