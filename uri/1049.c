#include <stdio.h>
#include <string.h>

int main()
{
  char A[30], B[30], C[30];
  scanf("%s", A);
  scanf("%s", B);
  scanf("%s", C);
  if (strcmp(A, "vertebrado") == 0 && strcmp(B, "ave") == 0 && strcmp(C, "carnivoro") == 0) printf("aguia\n");
  else if (strcmp(A, "vertebrado") == 0 && strcmp(B, "ave") == 0 && strcmp(C, "onivoro") == 0) printf("pomba\n");
  else if (strcmp(A, "vertebrado") == 0 && strcmp(B, "mamifero") == 0 && strcmp(C, "onivoro") == 0) printf("homem\n");
  else if (strcmp(A, "vertebrado") == 0 && strcmp(B, "mamifero") == 0 && strcmp(C, "herbivoro") == 0) printf("vaca\n");
  else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "inseto") == 0 && strcmp(C, "hematofago") == 0) printf("pulga\n");
  else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "inseto") == 0 && strcmp(C, "herbivoro") == 0) printf("lagarta\n");
  else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "anelideo") == 0 && strcmp(C, "hematofago") == 0) printf("sanguessuga\n");
  else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "anelideo") == 0 && strcmp(C, "onivoro") == 0) printf("minhoca\n");
  return 0;
}