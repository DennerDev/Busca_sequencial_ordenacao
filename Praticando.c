#include <stdio.h>

int mediaPares(int vetor[], int Tam, int soma, int quant){
  if(Tam ==0)
  return soma / quant;

  else{
    if(vetor[Tam-1] % 2 == 0)
     return mediaPares(vetor, Tam-1, soma + vetor[Tam-1], quant+= 1);

     else
       return mediaPares(vetor, Tam-1, soma, quant);
  }
}

int main () {
  int vetor[6] = {8,10,12,14,16,18};

  printf("Media dos valores eh: %d", mediaPares(vetor, 6, 0, 0));

  return 0;

}