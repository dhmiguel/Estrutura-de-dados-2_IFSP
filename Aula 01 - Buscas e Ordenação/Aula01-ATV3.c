#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void Ordena_bubbleSort(int *v, int n);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i;
    int desordenado[10] = {45,841,88,1,54,86,451,41,99,10};


    printf("*****Vetor Desordenado*****\n");
    for(i =0; i < 10; i++ ){
        printf("%d\t",desordenado[i]);
    }
    printf("\n\n");

    printf("*****Ordenação com BubbleSort*****\n");

    Ordena_bubbleSort(desordenado,10);

    for(i =0; i < 10; i++ ){
        printf("%d\t",desordenado[i]);
    }


}

void Ordena_bubbleSort(int *v, int n){
    int i, continua, aux, fim = n;

    do{
        continua = 0;
        for(i = 0 ; i < fim -1 ;i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua !=0);

}
