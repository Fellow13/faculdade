// ConsoleApplication42.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 0, altera, qnt;
	int qt = 0;
	int cont;
	long long busca;
	float imc;

	printf("Digite quantos usuarios deseja inserir. \n");
	cin >> qnt;

	typedef struct
	{
		char nome[30];
		float altura;
		long long cpf;
		char sexo;
		char hora[6];

	}pessoas;

	pessoas usuario[100];

	for (i = 0; i < qnt; i++)
	{

		printf("Digite o nome da pessoa: ");
		cin >> usuario[i].nome;

		printf("Digite o cpf da pessoa: ");
		cin >> usuario[i].cpf;

		printf("Digite a altura da pessoa: ");
		cin >> usuario[i].altura;

		printf("Digite a hora da consulta: ");
		cin >> usuario[i].hora;
	
		printf("\n");
	}

	printf("Digite o CPF que deseja procurar. \n");
	cin >> busca;

	for (i = 0; i < qnt; i++)
	{
		if (busca == usuario[i].cpf)
		{
			cont = i;
			break;
			system("cls");
		}

	}
	printf("Dados do usuario \n");
	printf("Nome: %s\n", usuario[cont].nome);
	printf("Altura: %.2f\n", usuario[cont].altura);
	printf("CPF: %lld\n", usuario[cont].cpf);
	printf("Hora: %s\n", usuario[cont].hora);
	printf("\n");

	printf("Deseja alterar o horario | 1 - sim | 2 - nao | \n");
	cin >> altera;

	printf("\n");

	if (altera == 1)
	{
		printf("Digite o novo horario. \n");
		cin >> usuario[cont].hora;

		printf("Digite o CPF que deseja procurar. \n");
		cin >> busca;

		for (i = 0; i < qnt; i++)
		{
			if (busca == usuario[i].cpf)
			{
				cont = i;
				break;
				system("cls");
			}

		}

		printf("Dados do usuario \n");
		printf("Nome: %s\n", usuario[cont].nome);
		printf("Altura: %.2f\n", usuario[cont].altura);
		printf("CPF: %lld\n", usuario[cont].cpf);
		printf("Hora: %s\n", usuario[cont].hora);
	}

	system("PAUSE");
    return 0;
}

