#include <stdio.h>
#include <stdlib.h>

int ConfereNumero (char Num[])
{
	int i, j, Aux, Flag;
	Flag = 0;
	for (i = 0; Num[i + 1] != '\0'; i++)
		for (j = i + 1; Num[j] != '\0'; j++)
			if (Num[i] == Num[j])
			{
				Flag = 1;
				break;
			}
	return Flag;
}

int main ()
{
	int i, N, M, Cont;
	char Num[6];
	while(scanf ("%d %d",&N,&M) != EOF)
	{
		Cont = 0;
		for (i = N; i <= M; i++)
		{
			snprintf(Num, sizeof(Num), "%d", i);
			if (ConfereNumero (Num) == 0)
				Cont++;
		}
		printf ("%d\n", Cont);
	}
	return 0;
}