#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int km = 12;
	int tempo_viagem, velocidade_media, distancia, litros_usados;

	printf("Digite o tempo que a viagem durou. \n");
	scanf_s("%i", &tempo_viagem);

	printf("Digite a velocidade media percorrida durante a viagem. \n");
	scanf_s("%i", &velocidade_media);

	distancia = (tempo_viagem * velocidade_media);

	litros_usados = (distancia / km);

	printf("Voce andou a %i km por hora em %i minutos e a distancia foi de: %i usando %i litros.", velocidade_media, tempo_viagem, distancia, litros_usados);
}