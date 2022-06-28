// Busca sequncial ordenado

#include <stdio.h>
#include <stdlib.h>
int buscaOrdenada(int vetor[], int n, int elem){
    int i;
    for(i = 0; i < n; i++){
        if(elem == vetor[i])
        return i;
         else 
           if(elem < vetor[i])
            return - 1;
    }
}


int main(){
    int vetor[5] = {1,2,3,4,5};
    int valor;

    printf("Qual o valor vc quer encontrar: ");
    scanf("%d", &valor);
    printf("O Resultado %d\n", buscaOrdenada(vetor, 4, valor));

    return 0;
}