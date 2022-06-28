// Metodo de Ordenação select_sort.
#include <stdio.h>

void select_sort(int vetor[], int Tam){
   int i, j, troca, menor;

   for(i = 0; i < Tam; i++){
    menor = i;

   for(j = (i+1); j < Tam; j++){
     if(vetor[j] < vetor[menor]){
      menor = j;
    }
   }
    if(i != menor){
    troca = vetor[i];
    vetor[i] = vetor[menor];
    vetor[menor] = troca;
   }
  }
  return -1;
 }


int main(){
  int i , vetor[3] = {10,0,11};

  select_sort(vetor, 3);

  for(i = 0; i < 3; i++){
   printf("%d ", vetor[i]);
 }   
 return 0;
}