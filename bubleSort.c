#include<stdio.h>
#include<stdlib.h>
#define TAM 8
int main (){
    int vetor[TAM], temporario, i, j;
    printf("Digite um numero para entrar no vetor: \n");
    for (i=0; i<TAM; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Vetor antes da ordenacao:\n");
    for (i=0; i<TAM; i++){
        printf("%d   ", vetor[i]);
    }
    for (j=0; j<1000; j++){

        for (i=0; i<TAM-1; i++){
            if(vetor[i] > vetor[i+1]){
                temporario = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temporario;
            }
        }
    }
    printf("\n");
    printf("\nResultado da ordenação Buble Sort:\n");
    for (i=0; i<TAM; i++){
        printf("%d,  ", vetor[i]);
    }
    printf("\n");
    return 0;	
}