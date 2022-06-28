// Função RecursivaIterativa

#include <stdio.h>
#include <stdlib.h>

int buscasequencialIter(int *vetor, int chave, int fim){
    int inicio = 0;
    int meio = (inicio + fim) / 2;

    while(inicio <= fim){
      if(chave == vetor[meio])
      return meio;
      else {
        if(chave < vetor[meio])
        fim = meio -1;
        else
        inicio = meio + 1;
      }
      meio = (inicio + fim) / 2;
    }
    return -1;
}

int main(){
    int vetor[5] = {10,20,30,40,50};
    int valor;

    printf("Qual o valor vc quer encontrar: ");
    scanf("%d", &valor);
    printf("O Resultado %d\n", buscasequencialIter(vetor, valor, 4));

    return 0;
}