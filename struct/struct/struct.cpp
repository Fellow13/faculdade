// ConsoleApplication8.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

struct carro
{
	char modelo[10];
	char marca[10];
	int ano;
	char  cor[10];
	char placa[8];

};

void LerDadosCarro()
{
	struct carro meuCarro;

	printf_s("Digite o modelo: ");
	fgets(meuCarro.modelo, 10, stdin);

	printf_s("Digite a marca: ");
	fgets(meuCarro.marca, 10, stdin);

	printf_s("Digite a cor: ");
	fgets(meuCarro.cor, 10, stdin);

	printf_s("Digite a placa: ");
	fgets(meuCarro.placa, 10, stdin);

	printf_s("Digite o ano: ");
	scanf_s("%i", &meuCarro.ano);
}

int main()
{
	LerDadosCarro();

	system("PAUSE");
	return 0;
}

