// ConsoleApplication2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


// Loja_venda_de_produtos.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//


/*
Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e
escrever o total (total = quantidade adquirida * preço unitário), o desconto e o total a pagar (total a pagar = total -
desconto), sabendo-se que:
- Se quantidade <= 5 o desconto será de 2%
- Se quantidade > 5 e quantidade <=10 o desconto será de 3%
- Se quantidade > 10 o desconto será de 5%
*/

#include <iostream>

int leituraproduto()
{
	int resp;

	printf("Digite 1- quantidade 2 - valor unitario do produto");
	scanf_s("%i", &resp);

	if (resp = 1)
	{
		int a;
		printf("Qual a quantidade do produto: ");
		scanf_s("%i", &a);

		return a;
	}
	if (resp = 2)
	{
		float b;
		printf("Qual a valor unitario do produto: ");
		scanf_s("%f", &b);

		return b;
	}
	return 0;
}

int calculocusto(int qt, float valor)
{
	float pagamento;
	pagamento = (qt*valor);

	return pagamento;
}

int main()
{
	char nome;

	int qt = leituraproduto();

	printf("Qual nome do produto : ");
	scanf_s("%c", &nome);


	float valor = leituraproduto();

	float pagamento = calculocusto(qt, valor);


	printf("f%", pagamento);
}