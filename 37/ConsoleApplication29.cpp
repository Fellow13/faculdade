// ConsoleApplication29.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	int dia1, mes1, ano1, dia2, mes2, ano2, ddia, dmes, dano;
	struct data
	{
		int dia;
		int mes;
		int ano;
	};

	struct data prim;
	struct data seg;
	printf("Digite a primeira data: \n");
	printf("Dia: \n");
	cin >> dia1;

	printf("Mes: \n");
	cin >> mes1;

	printf("Ano: \n");
	cin >> ano1;

	printf("Digite a segunda data: \n");

	printf("Dia: \n");
	cin >> dia2;

	printf("Mes: \n");
	cin >> mes2;

	printf("Ano: \n");
	cin >> ano2;
	
	prim.dia = dia1;
	prim.mes = mes1;
	prim.ano = ano1;
	seg.dia = dia2;
	seg.mes = mes2;
	seg.ano = ano2;
	ddia = prim.dia - seg.dia;
	dmes = prim.mes - seg.mes;
	dano = prim.ano - seg.ano;

	printf("Segue a diferenca entre as datas. \n");

	printf("Dias: %i\n", ddia);
	printf("Meses: %i\n", dmes);
	printf("Anos: %i\n", dano);

	system("PAUSE");
	return 0;
}