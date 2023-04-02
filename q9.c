#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

int main(){
    int mat[LIN][COL];

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("Digite os numeros da linha %d da matriz: \n", i+1);
            scanf("%d", &mat[i][j]);
        }
    }

    getchar();

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("%d ", &mat[i][j]);
        }
        printf("\n");
    }

    getchar();

    return 0;
}