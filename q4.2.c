#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

int main(){
    char str1[TAM], str2[TAM], letra_atual_str_1, letra_atual_str_2;
    int tam_str_1, tam_str_2, count = 0;

    printf("Digite um nome: \n");
    fgets(str1, TAM, stdin);
    printf("Digite outro nome: \n");
    fgets(str2, TAM, stdin);

    tam_str_1 = strlen(str1);
    tam_str_2 = strlen(str2);

    if(tam_str_1 < tam_str_2){
        int aux;
        aux = tam_str_1;
        tam_str_1 = tam_str_2;
        tam_str_2 = aux; 
    }

    for(int i = 0; i < tam_str_1; i++){
        letra_atual_str_1 = str1[i];
        letra_atual_str_2 = str2[i];

        if(tam_str_1 != tam_str_2){
        printf("\nAs palavras nao sao iguais");
        break;
        }

        if(letra_atual_str_1 == letra_atual_str_2){
            count++;
            continue;
        } else{
            printf("As palavras nao sao iguais \n");
            break;
        }
    }

    if(count == tam_str_1){
        printf("As palavras sao iguais \n");
    }

    return 0;
    
}
