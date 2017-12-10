#include <stdio.h>
#include <string.h>

int ProcuraCaracter(char *STRING, char CH)
{
  int CONT = 0;
  while (STRING[CONT] != '\0')
  { 
    if (CH == STRING[CONT]) return 1;
    CONT++;
  }
  return 0;
}

void RetiraDuplicada (char *STRING, char *STRINGAUX)
{
  int CONT = 0, CONTAUX;
  char AUX[2] = "\0";
  while (STRING[CONT] != '\0')
  {
    if (ProcuraCaracter(STRINGAUX, STRING[CONT]) == 0 && STRING[CONT] != ' ') 
    {
      AUX[0] = STRING[CONT];
      strcat(STRINGAUX, AUX);
    }
    CONT++;
  }
}

DefineFaixa (char *STRING)
{
  int CONT = 0, FROM, TO, CONTAUX; 
  while (STRING[CONT] != '\0')
  {
    CONTAUX = CONT + 1;
    FROM = STRING[CONT];
    while (STRING[CONT] + 1 == STRING[CONTAUX])
    {
      TO = STRING[CONTAUX];
      CONTAUX++;
      CONT++;
    } 
    if (FROM == STRING[CONT]) TO = STRING[CONT];
    printf("%c:%c", FROM, TO);
    if (STRING[CONTAUX] != '\0') printf(", ");
    CONT++;   
  }
}

void ORDENA(char *STRING, int ESQUERDA, int DIREITA)
{
   register int i, j;
   char X, Y;
   i = ESQUERDA; j = DIREITA;
   X = STRING[(ESQUERDA + DIREITA) / 2];
   do{
    while(STRING[i] < X && i < DIREITA) i++;
    while(X < STRING[j] && j > ESQUERDA) j--;
    if(i <= j){
     Y = STRING[i];
      STRING[i] = STRING[j];
      STRING[j] = Y;
      i++; j--;
    }
   } while(i <= j);
   if(ESQUERDA < j) ORDENA(STRING, ESQUERDA, j);
   if(i < DIREITA) ORDENA(STRING, i, DIREITA);
}
 
void Quick(char *STRING, int TAMANHO)
{
    ORDENA(STRING, 0, TAMANHO-1);
}

int main ()
{
  char STRING[60];
  char STRINGAUX[60] = "\0";
  while(fgets(STRING, 60, stdin))
  {  
    if (STRING[strlen(STRING) - 1] == '\n') STRING[strlen(STRING) - 1] = '\0';
    Quick(STRING, strlen(STRING));
    RetiraDuplicada(STRING, STRINGAUX);
    DefineFaixa(STRINGAUX);
    STRINGAUX[0] = '\0';
    printf("\n");
  }
  return 0;
}