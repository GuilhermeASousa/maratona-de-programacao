#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BuscaCarro(int *VAGAS, int TAMANHO, int PLACA)
{
  int CONT;
  for (CONT = 0; CONT < TAMANHO; CONT++)
  {
    if (VAGAS[CONT] == PLACA) return 1;
  }
  return 0;
}

void InicializaVagas(int *VAGAS, int TAMANHO)
{
  int CONT;
  for (CONT = 0; CONT < TAMANHO; CONT++)
  {
    VAGAS[CONT] = 0;
  }
}

signed int EncontraVaga(int *VAGAS, int TAMANHO, int COMP_CARRO)
{
  int CONT, AUX, POS;
  for (CONT = 0; CONT < TAMANHO; CONT++)
  {
    AUX = 0;
    if (VAGAS[CONT] == 0) 
    {
      POS = CONT;
      while (VAGAS[CONT] == 0 && CONT < TAMANHO && AUX < COMP_CARRO) 
      {
        AUX++;
        CONT++;
      }
    }
    if (AUX >= COMP_CARRO) return POS; 
  }
  return -1;
}

void PreencheVaga(int *VAGAS, int TAMANHO, int POS, int COMP_CARRO, int PLACA)
{
  int CONT;
  for (CONT = POS; CONT < POS + COMP_CARRO; CONT++)
  {
    VAGAS[CONT] = PLACA;
  }
}

void EsvaziaVaga(int *VAGAS, int TAMANHO, int PLACA)
{
  int CONT;
  for (CONT = 0; CONT < TAMANHO; CONT++)
  {
    if (VAGAS[CONT] == PLACA) VAGAS[CONT] = 0;
  }
}

int main()
{
  int COMPRIMENTO_ESTACIONAMENTO, N, CONT, LUCRO, PLACA, COMPRIMENTO;
  char MOVIMENTO, MOVIMENTACAO[50];
  int *VAGAS;
  while(scanf("%d %d\n", &COMPRIMENTO_ESTACIONAMENTO, &N) != EOF)
  {  
    LUCRO = 0;
    VAGAS = (int *) malloc(sizeof(int) * COMPRIMENTO_ESTACIONAMENTO);
    InicializaVagas(VAGAS, COMPRIMENTO_ESTACIONAMENTO);
    for (CONT = 0; CONT < N; ++CONT)
    {
      fgets(MOVIMENTACAO, 50, stdin);
      if (MOVIMENTACAO[strlen(MOVIMENTACAO)] == '\n') MOVIMENTACAO[strlen(MOVIMENTACAO)] = '\0';
      if (MOVIMENTACAO[0] == 'C')
      {
        sscanf(MOVIMENTACAO, "%c %d %d\n", &MOVIMENTO, &PLACA, &COMPRIMENTO);
      }
      else if (MOVIMENTACAO[0] == 'S')
      {
        sscanf(MOVIMENTACAO, "%c %d\n", &MOVIMENTO, &PLACA);
      }
      if (MOVIMENTO == 'C' && BuscaCarro(VAGAS, COMPRIMENTO_ESTACIONAMENTO, PLACA) == 0 && EncontraVaga(VAGAS, COMPRIMENTO_ESTACIONAMENTO, COMPRIMENTO) != -1)
      {
        PreencheVaga(VAGAS, COMPRIMENTO_ESTACIONAMENTO, EncontraVaga(VAGAS, COMPRIMENTO_ESTACIONAMENTO, COMPRIMENTO), COMPRIMENTO, PLACA);
        LUCRO += 10;
      }
      else if (MOVIMENTO == 'S' && BuscaCarro(VAGAS, COMPRIMENTO_ESTACIONAMENTO, PLACA) == 1)
      {
        EsvaziaVaga(VAGAS, COMPRIMENTO_ESTACIONAMENTO, PLACA);
      }
    }
    free(VAGAS);
    printf("%d\n", LUCRO);
  }
  return 0;
}