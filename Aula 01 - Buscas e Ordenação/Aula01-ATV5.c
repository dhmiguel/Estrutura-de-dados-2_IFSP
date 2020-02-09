#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void Ordena_selectionSort(int *v, int n);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i;
    int desordenado[10] = {45,841,88,1,54,86,451,41,99,10};

    printf("*****Vetor Desordenado******\n\n");

    for(i =0; i < 10; i++ ){
        printf("%d\t",desordenado[i]);
    }
    printf("\n\n");

    printf("******Ordenação por SelectionSort*****\n\n");

    Ordena_selectionSort(desordenado,10);

    for(i =0; i < 10; i++ ){
        printf("%d\t",desordenado[i]);
    }
    printf("\n\n");
    return 0;
}

void Ordena_selectionSort(int *v, int n){
    int i, j, menor, troca;
    for(i = 0 ; i < n - 1; i++){
        menor = i;
        for(j = i + 1; j < n ; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        if(i !=menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}
