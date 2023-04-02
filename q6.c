#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

int main(){
    char palavra[TAM], aux;

    printf("Digite uma palavra: \n");
    scanf("%s", palavra);

    strrev(palavra);

    printf("%s", palavra);
}
