#include <stdio.h>
#include <stdlib.h>


#define MAX 8

void merge(int v[], int tamanho) {
  int meio = tamanho / 2;
  int i = 0, j = meio, k = 0;
  int temporario[tamanho];

  while( i < meio && j < tamanho ){
    if( v[i] <= v[j] )
      temporario[k] = v[i++];
    else
      temporario[k] = v[j++];
    k++;
  }

  if( i == meio )
    while( j < tamanho )
      temporario[k++] = v[j++];
  else
    while( i < meio )
      temporario[k++] = v[i++];

  for( i = 0; i < tamanho; i++ )
    v[i] = temporario[i];
}

int mergeSort(int v[], int tamanho){
	int meio = tamanho / 2;

	if( tamanho > 1 ){
		mergeSort(v, meio);
		mergeSort(v + meio, tamanho - meio);
		merge(v, tamanho);
	}

}
int main(){

	int v[MAX];

	printf("Informe os valores:\n");
	for(int i=0; i<MAX; i++){
		scanf("%d", &v[i]);
	}

	printf("Antes da ordenação:\n");
  for(int i= 0; i < MAX; i++){
  printf("%d  ", v[i]);
}
  printf("\n");
	mergeSort(v, MAX);

  printf("\nValores ordenados\n");
	for(int i = 0; i < MAX; i++){
		printf("%d, ", v[i]);
	}

  printf("\n");
	return 0;
}