#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

int main(){
    char nome1[TAM], nome2[TAM];
    int res = 0;

    printf("Digite um nome\n");
    fgets(nome1, TAM, stdin);
    printf("Digite outro nome\n");
    fgets(nome2, TAM, stdin);

    res = strcmp(nome1, nome2);

    res != 0 ? printf("As palavras nao sao iguais\n"): printf("As palavras sao iguais\n"); 

    return 0;
}
