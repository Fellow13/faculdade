#include "stdafx.h"
#include <iostream>

int main()
{
	float altchico = 1.50, altze = 1.10;
	int cont = 0;

	while (altze < altchico)
	{
		altze = altze + 0.03;
		altchico = altchico + 0.02;
		cont++;
	}
	printf("Ze vai ter %.2f e chico tera %.2f com %i anos \n", altze, altchico, cont);

	system("pause");
	return 0;

}