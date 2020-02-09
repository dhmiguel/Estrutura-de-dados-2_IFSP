#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int buscaLinear(int *vetor, int n, int elem);

int buscaOrdernada(int *vetor, int n, int elem);

int buscaBinaria(int *vetor, int n, int elem);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ordenado[10] = {1,2,3,4,5,6,7,8,9,10,11};
    int desordenado[10] = {45,841,88,1,54,86,451,41,99,10};

    int num1 = 451, num2 = 6, num3 = 2;

    int resultado;

   resultado = buscaLinear(desordenado, 10, num1);

   if(resultado != -1){
    printf("Busca Linear realizada com sucesso!\n\n");
    printf("O Elemento encontrado na busca, localiza-se na posição %d\n\n",resultado);
   }
   else{
    printf("Elemento não encontrado!\n\n");
   }

   for(int i = 0; i < 10; i++){
    printf("Posição[%d] = %d\n",i,desordenado[i]);
   }
   system("pause");
   system("cls");

   resultado = buscaOrdernada(ordenado, 10, num2);

   if(resultado != -1){
    printf("Busca Ordenada realizada com sucesso!\n\n");
    printf("O Elemento encontrado na busca, localiza-se na posição %d\n\n",resultado);
   }
   else{
    printf("Elemento não encontrado!\n\n");
   }

   for(int i = 0; i < 10; i++){
    printf("Posição[%d] = %d\n",i,ordenado[i]);
   }
   system("pause");
   system("cls");

   resultado = buscaBinaria(ordenado, 10, num3);

   if(resultado != -1){
    printf("Busca Binária realizada com sucesso!\n\n");
    printf("O Elemento encontrado na busca, localiza-se na posição %d\n\n",resultado);
   }
   else{
    printf("Elemento não encontrado!\n\n");
   }

   for(int i = 0; i < 10; i++){
    printf("Posição[%d] = %d\n",i,ordenado[i]);
   }
   system("pause");
   system("cls");
}


int buscaLinear(int *vetor, int n, int elem){
    int i;
    for(i = 0; i < n; i++){
        if(elem == vetor[i]){
            return i;
        }
    }
    return -1;
}

int buscaOrdernada(int *vetor, int n, int elem){
    int i;
    for(i = 0; i< n ; i++){
        if(elem == vetor[i]){
            return i;
        }
        else{
            if(elem < vetor[i]){
                return -1;
            }
        }
    }

}

int buscaBinaria(int *vetor, int n, int elem){
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n - 1;

    while(inicio <=fim){
        meio = (inicio + fim)/2;
        if(elem < vetor[meio]){
            fim = meio - 1;//Busca na metade esquerda
        }
        else{
            if(elem > vetor[meio]){
                inicio = meio + 1;//Busca na metade direita
            }
            else{
                return meio;
            }
        }
    }
    return -1; //Elemento não encontrado
}
