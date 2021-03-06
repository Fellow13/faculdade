// ConsoleApplication6.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

float calculaIR(float salario, float aliquota, float deducao)
{
	return (salario * aliquota) - deducao;
}

float calculator(float salario)
{
	float result;

	if (salario <= 1903.98)
	{
		printf_s("Isento");
	}
	else if ((salario >= 1903.99) || (salario <= 2826.65)) {
		result = calculaIR(salario, 0.075, 142.80);
		printf_s("Aliquota: 7.5%%, deducao: 142.80 \n");
		printf_s("Valor IR: %.2f \n", result);
	}
	else if ((salario >= 2826.66) || (salario <= 3751.05)) {
		result = calculaIR(salario, 0.15, 354.80);
		printf_s("Aliquota: 15%%, deducao: 354.80 \n");
		printf_s("Valor IR: %.2f \n", result);
	}
	else if ((salario >= 3751.06) || (salario <= 4664.68)) {
		result = calculaIR(salario, 0.225, 636.13);
		printf_s("Aliquota: 22.5%%, deducao: 636.13 \n");
		printf_s("Valor IR: %.2f \n", result);
	}
	else 
	{
		result = calculaIR(salario, 0.275, 869.36);
		printf_s("Aliquota: 27.5%%, deducao: 869.36 \n");
		printf_s("Valor IR: %.2f \n", result);
	}

	return result;
}

float main()
{
	float salario;

	printf_s("Digite o valor do salario \n");
	scanf_s("%f", &salario);

	float lastResult = calculator(salario);

	system("PAUSE");
	return 0;
}