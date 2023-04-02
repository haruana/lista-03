#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAN 10
#define LIN 2
#define COL 5


int main(){
    int matriz[LIN][COL];
    srand(time(NULL));

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            matriz[i][j] = rand() %RAN;
        }
    }

    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);

    int count = 0;
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if (matriz[i][j] == num){
                count++;
            }
        }
    }

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n\n");
    }

    count > 1 ? printf("O numero %d aparece %d vezes na matriz\n", num, count) : printf("O numero %d aparece %d vez na matriz\n", num, count);
    
    return 0;
}

