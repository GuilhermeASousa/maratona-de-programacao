#include <stdio.h>
#include <stdlib.h>

void ZeraVetor (int Entrada[], int Saida[])
{
	int i;
	for (i = 0; i < 100001; i++)
	{
		Entrada[i] = 0;
		Saida[i] = 0;
	}
}

int main ()
{
	int NumCarros, Capacidade, Entrada[100001], Saida[100001], *Pilha, HrEntrada, HrSaida, UltimoASair, i, j;
	scanf ("%d %d", &NumCarros, &Capacidade);
	while (NumCarros != 0 && Capacidade != 0)
	{
		ZeraVetor (Entrada, Saida);
		UltimoASair = 0;
		Pilha = malloc (sizeof (int) * Capacidade);
		j = Capacidade - 1;
		for (i = 0; i < NumCarros; i++)
		{
			scanf ("%d %d", &HrEntrada, &HrSaida);
			Entrada[HrEntrada] = i + 1;
			Saida[HrSaida] = i + 1;
			if (HrSaida > UltimoASair)
				UltimoASair = HrSaida;
		}
		for (i = 1; i <= UltimoASair; i++)
		{
			if (Saida[i] != 0)
			{
				if (j == Capacidade - 1)
					break;
				else if (Pilha[j + 1] != Saida[i])
					break;
				else
				{
					Pilha[j + 1] = 0;
					j++;
				}
			}
			if (Entrada[i] != 0)
			{
				if (j >= 0)
				{
					Pilha[j] = Entrada[i];
					j--;
				}
				else 
					break;
			}
		}
		if (i - 1 == UltimoASair)
			printf ("Sim\n");
		else
			printf ("Nao\n");
		free (Pilha);
		scanf ("%d %d", &NumCarros, &Capacidade);
	}
	return 0;
}