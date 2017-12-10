#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int *LETRAS, NUM_TESTES, CONT, i, j;
	char CH;
	scanf ("%d ", &NUM_TESTES);
	for (i = 0; i < NUM_TESTES; i++)
	{
	    LETRAS = malloc (sizeof (int) * 26);
	    for (j = 0; j < 26; j++)
	    	LETRAS[j] = 0;
	    CONT = 0;
		while (CH = getchar())
		{
			if (CH >= 97 && CH <= 122 && LETRAS[CH - 97] == 0)
			{
				LETRAS[CH - 97] = 1;
				CONT++;
			}
			else if (CH == '\n' || CH == EOF)
				break;
		}
		if (CONT == 26)
			printf ("frase completa\n");
		else if (CONT >= 13 && CONT < 26)
			printf ("frase quase completa\n");
		else
			printf ("frase mal elaborada\n");
		free (LETRAS);
	}
	return 0;
}