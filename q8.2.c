#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAM 100

void gerarVetor(int vetor[], int t, int num);
void imprimirVetor(int vetor[], int t);

int main(){
    int vetor[TAM], num;
    srand(time(NULL));

    printf("Digite um numero: \n");
    scanf("%d", &num);

    gerarVetor(vetor, TAM, num);

    imprimirVetor(vetor, TAM);

//   ...continuar

    return 0;
}

void gerarVetor(int vetor[], int t, int num){
    for(int i = 0; i < t; i++){
        vetor[i] = rand() %num;
    }
}

void imprimirVetor(int vetor[], int t){
    for(int i = 0; i < t; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}