#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    char str[TAM], str2[TAM];
    char *pont1, *pont2;

    printf("Digite um nome: \n");
    scanf("%s", str);
    printf("Digite outro nome: \n");
    scanf("%s", str2);
//refazer...
    pont1 = &str;
    pont2 = &str2;


    int i = 0, j = 0;
    while (str[i] != '\0'){
        i++;
    }
    while (str2[j] != '\0'){
        str[i] = str[j];
        i++; j++;
    }
    str[i] = '\0';
}