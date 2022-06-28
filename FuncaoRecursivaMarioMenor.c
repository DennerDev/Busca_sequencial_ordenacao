// Função recursiva, o maior  e o menor elemento dentro de uum vetor

#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int vetor[], int tam, int indice){
   if(tam == 0)
     return vetor[indice];

      else {

        if(vetor[tam - 1] > vetor[indice]) // Troca o sinal pra achar o menor (< ou >)
         return maiorElemento(vetor, tam - 1, tam -1); 

          else
           return maiorElemento(vetor , tam -1, indice);
      }
      return -1;
}


int main (){

    int vetor[10] = {44,11,10,5,6,0,40,5,11,10};

    printf("O maior: %d\n", maiorElemento(vetor , 10, 0));

    return 0;
}