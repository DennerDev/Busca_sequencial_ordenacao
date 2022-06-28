// Metodo de Ordenção insert_sort

#include <stdio.h>

void insert_sort(int vetor[], int TAM){
    int troca, i;

    for(i = 0; i < TAM; i++){
        int proximo = i;

      while((proximo != 0) && (vetor[proximo] < vetor[proximo-1])){
        troca = vetor[proximo];
        vetor[proximo] = vetor[proximo-1];
        vetor[proximo-1] = troca;
        proximo-- ;
      }
    }
    return -1;
}

int main() {
    int vetor[7] = { 10,22,33,56,44,212};

    insert_sort(vetor, 7);

    for(int i = 0; i < 7; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}