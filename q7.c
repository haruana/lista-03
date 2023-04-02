#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3
#define RAN 19

void imprimirVetor(int vetor[], int t);

void calculoMediaAri(int vetor[], int t, float mediaAri, float soma);

void calcularMediaGeo(int vetor[], int t, float mediaGeo, float multi);


int main(){
    int vetor[TAM];
    float  multi = 1.0, soma = 1.0, mediaGeo = 0.0, mediaAri = 0.0;
    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        vetor[i] = rand() %RAN;
    }

    imprimirVetor(vetor, TAM);

    calculoMediaAri(vetor, TAM, mediaAri, soma);

    calcularMediaGeo(vetor, TAM, mediaGeo, multi);

    return 0;
}

void imprimirVetor(int vetor[], int t){
    printf("O vetor e: \n");
    for(int i = 0; i < t; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}

void calculoMediaAri(int vetor[], int t, float mediaAri, float soma){
    for(int i = 0; i < t; i++){
        soma += vetor[i];
    }

    mediaAri = (soma/TAM);

    printf("A media aritimetica dos numeros nesse vetor e igual a: %.1f\n", mediaAri);
    printf("\n");

}

void calcularMediaGeo(int vetor[], int t, float mediaGeo, float multi){
    for(int i = 0; i < t; i++){
        multi *= vetor[i];
    }

    mediaGeo = pow(multi, (1/TAM));

    printf("A media geometrica dos numeros nesse vetor e igual a: %.1f\n", mediaGeo);
    printf("\n");
}

