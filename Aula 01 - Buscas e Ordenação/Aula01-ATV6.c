#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void Ordena_insertionSort(int *v, int n);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i;
    int desordenado[10] = {45,841,88,1,54,86,451,41,99,10};

    printf("*****Vetor Desordenado******\n\n");

    for(i =0; i < 10; i++ ){
        printf("%d\t",desordenado[i]);
    }
    printf("\n\n");

    printf("******Ordenação por InsertionSort*****\n\n");

    Ordena_insertionSort(desordenado,10);

    for(i =0; i < 10; i++ ){
        printf("%d\t",desordenado[i]);
    }
    printf("\n\n");
    return 0;


}

void Ordena_insertionSort(int *v, int n){
    int i, j, aux;

    for(i = 1; i < n; i++){
        aux = v[i];
        for(j = i ; (j > 0) && (aux < v[j-1]); j--){
            v[j] = v[j-1];
        }
        v[j] = aux;
    }
}
