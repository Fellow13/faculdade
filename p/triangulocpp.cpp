#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, s, p;

	printf("Digite o valor de A. \n");
	cin >> a;

	printf("Digite o valor de b. \n");
	cin >> b;

	printf("Digite o valor de c. \n");
	cin >> c;

	if (a < 1 || b < 1 || c < 1)
	{
		printf("Valores invalidos. \n");
	}
	else
	{
		p = ((a + b + c) / 2);

		s = (sqrt(p*(p - a)*(p - b)*(p - c)));

		printf("Area do triangulo e de: %i. \n", s);
	}

	system("PAUSE");
    return 0;
}

