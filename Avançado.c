#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//fun��o para movimenta��o da rainha

void moverRainha(int r)
{
	if (r < 8) {
		moverRainha(r + 1);
		printf("Rainha: Esquerda\n", r);	
	}
	
}

//fun��o para movimenta��o do bispo

void MoverBispo(int b)
{
	if (b < 5)
	{
		printf("Bispo: Direita\n", b);
		MoverBispo(b + 1);
	}
	
}

//fun��o para movimenta��o da torre

void MoverTorre(int t)
{
	if (t < 5)
	{
		printf("Torre: Cima\n", t);
		MoverTorre(t + 1);
	}
	
}

int main()
{
	int torre = 0, bispo = 0, rainha = 0; //vari�veis para movimenta��o das pe�as (retirei a vari�vel cavalo pois n�o precisei mais dela)

	{
		moverRainha(rainha);
		printf("\n");
	}

	{
		MoverBispo(bispo);
		printf("\n");
	}
	{
		MoverTorre(torre);
		printf("\n");
	}
	//movimenta��o do cavalo
	for (int i = 0; i < 2; i++) {  
		for (int j = 0; j < 1; j++) {  
			printf("Cavalo: Cima\n");
		}
	}
	printf("Cavalo: Direita\n");

	return 0;
}
