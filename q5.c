#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

int main(){
    char str[TAM], str2[TAM];

    printf("Digite uma palavra: \n");
    scanf("%s", str);
    printf("Digite outra palavra: \n");
    scanf("%s", str2);

    strcat(str, str2);

    printf("%s \n", str);

    return 0;
}