// Função Recursiva Media numeros pares inteiros

#include <stdio.h>
#include <stdlib.h>

int mediaPares(int vetor[], int tam, int soma, int quant ) {
   if(tam == 0)
    return soma / quant;

     else{
        if(vetor[tam -1] % 2 == 0)
         return mediaPares(vetor, tam-1, soma + vetor[tam -1], quant += 1);

          else
           return mediaPares(vetor, tam -1, soma, quant);
     }
     return -1;

}

int main () {
  int vetor[6] = {8,10,12,14,16,18};

  printf("Media dos valores eh: %d", mediaPares(vetor, 6, 0, 0));

  return 0;

}