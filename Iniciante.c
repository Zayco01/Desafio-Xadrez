#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int torre = 1, bispo = 1, rainha;

	for (rainha = 1; rainha <= 8; rainha++)
	{
		printf("Rainha: Esquerda\n", rainha);
	}

	while (bispo <= 5)
	{
		printf("Bispo: Direita\n", bispo);
		bispo++;
	}

	do {
		printf("Torre: Frente\n", torre);
		torre++;
	} while (torre <= 5);

	return 0;
}
