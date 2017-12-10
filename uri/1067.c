#include <stdio.h>

int main()
{
  int i, NUM;
  scanf("%d", &NUM);
  for (i = 1; i <= NUM; i++)
    if (i % 2 != 0) printf("%d\n", i);
  return 0;
}