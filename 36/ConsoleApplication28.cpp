#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num[20], i;

	for (i = 0; i < 20; i++)
	{
		printf("Digite o %i valor. \n", i + 1);
		cin >> num[i];
	}

	for (i = 0; i < 20; i++)
	{
		printf("%i x %i = %i \n", i + 1, num[i], (i + 1)* num[i]);
	}

	system("pause");
	return 0;
}