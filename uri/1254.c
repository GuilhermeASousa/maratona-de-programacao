#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TrocaString(char *TEXTO, char *NEW, char *ORIGINAL, int TAMANHO, int POSICAO)
{
  int TAMANHO_NEW = 0, DIFERENCA = 0, CONT = 0, i, POSICAO_AUX;
  char AUX;
  TAMANHO_NEW = strlen(NEW) - 1;
  if (TAMANHO_NEW == TAMANHO)
  {
    while (TAMANHO > 0)
    {
      TEXTO[POSICAO] = NEW[CONT];
      POSICAO++;
      CONT++;
      TAMANHO--;
    }
  }
  else if (TAMANHO_NEW < TAMANHO)
  {
    DIFERENCA = TAMANHO - TAMANHO_NEW;
    while (CONT < TAMANHO_NEW)
    {
      TEXTO[POSICAO] = NEW[CONT];
      POSICAO++;
      CONT++;
    }
    while (POSICAO <= strlen(TEXTO))
    {
      TEXTO[POSICAO] = TEXTO[POSICAO+DIFERENCA];
      POSICAO++;
    }
  }
  else 
  {
    DIFERENCA = TAMANHO_NEW - TAMANHO;
    for (i = 0; i < DIFERENCA; i++) strcat(TEXTO, " ");
    while (ORIGINAL[CONT] != '\n')
    {
      TEXTO[POSICAO] = NEW[CONT];
      POSICAO++;
      CONT++;
    }
    for (i = strlen(TEXTO)-DIFERENCA; i != POSICAO; i--)
    { 
      AUX = TEXTO[i-1];
      TEXTO[i-1] = TEXTO[i];
      TEXTO[i] = AUX;
    }
    while (NEW[CONT] != '\n')
    {
      TEXTO[POSICAO] = NEW[CONT];
      POSICAO++;
      CONT++;
    }
  }
}

void SubstituiTags (char *ORIGINAL, char *NEW, char *TEXTO)
{
  int CONT, CONT_AUX, IGUALDADE = 0, J;
  for (CONT = 0; TEXTO[CONT] != '\0'; CONT++)
  {
    if (TEXTO[CONT] == '<')
    {
      CONT++;
      while (TEXTO[CONT] != '>')
      {
        if (toupper(ORIGINAL[0]) == toupper(TEXTO[CONT]))
        {
          J = 0;
          CONT_AUX = CONT;
          while (toupper(ORIGINAL[J]) == toupper(TEXTO[CONT_AUX]))
          {
            IGUALDADE++;
            CONT_AUX++;
            J++;
          }
          if (IGUALDADE == strlen(ORIGINAL) - 1)
          {
            TrocaString(TEXTO, NEW, ORIGINAL, strlen(ORIGINAL) - 1, CONT); 
          }
          IGUALDADE = 0;
        }
        CONT++;
      }
    }
  }
}

int main ()
{
  char TAG_ORIGINAL[15];
  char NUM[10];
  char TEXTO[60];
  int i;
  while(fgets(TAG_ORIGINAL, 11, stdin))
  {  
    fgets(NUM, 5, stdin);
    fgets(TEXTO, 51, stdin); 
    if (TEXTO[strlen(TEXTO) - 1] == '\n') TEXTO[strlen(TEXTO) - 1] = '\0';
    SubstituiTags(TAG_ORIGINAL, NUM, TEXTO);
    printf("%s\n", TEXTO);
  }
  return 0;
}