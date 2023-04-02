#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    char nome[TAM];
    int count = 0;

    printf("Digite uma palavra de ate 10 caracteres\n");
    fgets(nome, TAM, stdin);

    while(nome[count] != '\0'){
        count++;
    }

    printf("Existem %d letras na palavra %s\n", count, nome);

    return 0;
}