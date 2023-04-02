#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15
#define RAN 50
void imprimirVetor(float v[], float t);

int main(){
    float v[TAM], aux, soma = 0;
    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        v[i] = rand() %RAN;
    }

    imprimirVetor(v, TAM);

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    imprimirVetor(v, TAM);

    soma = v[0] + v[14];

    printf("A soma do maior e menor numeros do vetor e igual a: %.1f\n", soma);

    return 0;
}

void imprimirVetor(float v[], float t){
    for(int i = 0; i < t; i++){
        printf("%.1f ", v[i]);
    }
    printf("\n\n");
}

