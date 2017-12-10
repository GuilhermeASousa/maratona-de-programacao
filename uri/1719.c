#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BinaryToDecimal(char *BINARY)
{
  int CONT, AUX = 1, DECIMAL = 0;
  for (CONT = 7; CONT >= 0; CONT--)
  {
    if (BINARY[CONT] == '1')
    {
      DECIMAL += AUX;
    }
    AUX *= 2;
  }
  return DECIMAL;
}

void DecimalToBinary(int DECIMAL, char *BINARY)
{
  strcpy(BINARY, "\0");
  int CONT, AUX = 128;
  for (CONT = 7; CONT >= 0; CONT--)
  {
    if (DECIMAL - AUX >= 0) 
    {
      strcat(BINARY, "1");
      DECIMAL -= AUX;
    }
    else 
      strcat(BINARY, "0");
    AUX /= 2;
  }
}

int main ()
{
  char VETOR[32][10];
  int CONT;
  int DECIMAL;
  int ACUMULADOR;
  int PC;
  char BINARY[10] = "\0";
  while (fgets(VETOR[0], 10, stdin))
  {
    ACUMULADOR = 0;
    PC = 0;
    if (VETOR[0][8] == '\n') VETOR[0][8] = '\0';
    for (CONT = 0; CONT < 31; CONT++)
    {
      fgets(VETOR[CONT+1], 10, stdin);
      if (VETOR[CONT+1][8] == '\n') VETOR[CONT+1][8] = '\0';
    }
    while (1)
    {
      DECIMAL = BinaryToDecimal(VETOR[PC]);
      if (DECIMAL>>5 == 0)
      {
        PC++;
        DecimalToBinary(ACUMULADOR, BINARY);
        strcpy(VETOR[DECIMAL & 31], BINARY);
      }
      else if (DECIMAL>>5 == 1)
      { 
        PC++;
        ACUMULADOR = BinaryToDecimal(VETOR[DECIMAL & 31]);
      }
      else if (DECIMAL>>5 == 2)
      {
        PC++;
        if (ACUMULADOR == 0)
          PC = DECIMAL & 31;
      }
      else if (DECIMAL>>5 == 3)
      {
        PC++;
      }
      else if (DECIMAL>>5 == 4)
      {
        PC++;
        if ((ACUMULADOR - 1) < 0) ACUMULADOR = 255;
        else ACUMULADOR--;
      }
      else if (DECIMAL>>5 == 5)
      {
        PC++;
        if ((ACUMULADOR + 1) > 255) ACUMULADOR = 0;
        else ACUMULADOR++;
      }
      else if (DECIMAL>>5 == 6)
      {
        PC++;
        PC = DECIMAL & 31;
      }
      else if (DECIMAL>>5 == 7)
      {
        break;
      }
      if (PC == 32) PC = 0;
    }
    DecimalToBinary(ACUMULADOR, BINARY);
    printf("%s\n", BINARY);
  }
  return 0;
}