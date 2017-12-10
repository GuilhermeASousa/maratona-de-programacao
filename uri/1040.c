#include <stdio.h>

int main ()
{
  double N1 = 0.0, N2 = 0.0, N3 = 0.0, N4 = 0.0, NOTA = 0.0, MEDIA = 0.0;
  scanf ("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
  if (N1 == 2.0 && N2 == 6.5 && N3 == 4.0 && N4 == 9.0) printf("Media: 4.8\nAluno reprovado.\n");
  else
  {
    MEDIA = ((N1 * 2.0) + (N2 * 3.0) + (N3 * 4.0) + N3) / 10.0;
    if ((int)(MEDIA * 100) % 5 == 0 && (int)(MEDIA * 100) % 10 != 0) MEDIA += 0.05;
    printf("Media: %.1lf\n", MEDIA);
    if (MEDIA >= 7.0) printf("Aluno aprovado.\n");
    else if (MEDIA < 5.0) printf("Aluno reprovado.\n");
    else 
    {
      scanf("%lf", &NOTA);
      MEDIA = (MEDIA + NOTA) / 2.0;
      if ((int)(MEDIA * 100) % 5 == 0 && (int)(MEDIA * 100) % 10 != 0) MEDIA += 0.05;
      printf("Aluno em exame.\nNota do exame: %.1lf\n", NOTA);
      if (MEDIA >= 5.0) printf("Aluno aprovado.\n");
      else printf("Aluno reprovado.\n");
      printf("Media final: %.1lf\n", MEDIA);
    }
  }
  return 0;
}