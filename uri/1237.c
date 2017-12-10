#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ContaSubstring(char *string1, char*string2)
{
  int i, j, auxi, auxj;
  int max = 0;
  int aux_max = 0; 
  if (strlen(string1) >= strlen(string2))
  {
    for (i = 0; string1[i] != '\0'; i++)
    {
      for (j = 0; string2[j] != '\0'; j++)
      {
        if (string1[i] == string2[j])
        {
          auxi = i;
          auxj = j;
          aux_max = 0;
          while (string1[auxi] == string2[auxj] && auxi < strlen(string1) - 1 && auxj < strlen(string2) - 1)
          {
            aux_max++;
            auxi++;
            auxj++;
          }
          if (aux_max > max) max = aux_max;
        }
      }
    }
  }
  else
  {
    for (i = 0; string2[i] != '\0'; i++)
    {
      for (j = 0; string1[j] != '\0'; j++)
      {
        if (string2[i] == string1[j])
        {
          auxi = i;
          auxj = j;
          aux_max = 0;
          while (string2[auxi] == string1[auxj] && auxi < strlen(string2) - 1 && auxj < strlen(string1) - 1)
          {
            aux_max++;
            auxi++;
            auxj++;
          }
          if (aux_max > max) max = aux_max;
        }
      }
    }
  }
  return max;
}

int main()
{
  char string1[60] = "\0";
  char string2[60] = "\0";
  int resultado;
  while(fgets(string1, 60, stdin))
  {  
    fgets(string2, 60, stdin);
    resultado = ContaSubstring(string1, string2);
    printf("%d\n", resultado);
  }
  return 0;
}