#include <stdio.h>
#include <stdlib.h>

#define MAX 10

    void quickSort(int *v, int esq,int dir);

        int main(int argc, char** argv){
        int i, vetor[MAX];

        printf("Informe os valores:\n");
        for(i=0; i < MAX; i++){
            scanf("%d ", &vetor[i]);
        }

        printf("Antes da ordenação:\n");
        for(i= 0; i < MAX; i++){
            printf("%d  ", vetor[i]);
        }
        printf("\n");

        particiona(vetor, 0, MAX-1);

        printf("\nValores ordenados do Quick Sort\n");
        for(i = 0; i < MAX; i++){
            printf("%d, ", vetor[i]);
        }
    printf("\n");
    return 0;
}

    void particiona(int *v, int esq, int dir){
    int inicio, fim, pivo, aux;

    inicio = esq;
    fim = dir;
    pivo = v[(esq + dir) / 2];

    while(inicio <= fim){
        while(v[inicio] < pivo && inicio < dir){
            inicio++;
        }
        while(v[fim] > pivo && fim > esq){
            fim--;
        }
        if(inicio <= fim){
            aux = v[inicio];
            v[inicio] = v[fim];
            v[fim] = aux;
            inicio++;
            fim--;
        }
    }

    if(fim > esq){
        particiona(v, esq, fim);
    }
    if(inicio < dir){
        particiona(v, inicio, dir);
    }
}