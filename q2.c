#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

int main(){
    char palavra[TAM];
    char letra;
    int tam_str;
    int count = 0;

    printf("Digite uma palavra de ate 20 caracteres: \n");
    scanf("%s", palavra);
    getchar();

    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    getchar();

    tam_str = strlen(palavra);

    for(int i = 0; i < tam_str; i++){
        char letra_atual = palavra[i];
        if (letra == letra_atual){
            count++;
        } 
    }

    if (count != 0){
        printf("a letra %c aparece %d vezes na palavra %s\n", letra, count, palavra);
    } else{
        printf("A letra %c nao aparece na palavra %s\n", letra, palavra);
    }

    return 0;
}