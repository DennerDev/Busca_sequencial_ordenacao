// Função recursiva que soma o numeros dentro de uma vetor.

#include <stdio.h>
#include <stdlib.h>

int soma (int vetor[], int TAM){
   if(TAM == 0 )
     return 0;

    else 
      return vetor[TAM -1] + soma(vetor, TAM -1); 

}

int main(){

    int vet[10] = {1,6,54,2,6,10,30,50,1,1};

    printf("Soma: %d\n", soma(vet, 10));

    return 0;
}