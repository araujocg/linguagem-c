#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int matriz[3/* Linhas / row */][3 /* Colunas */];/* = {{1,2,3},{4,5,6},{7,8,9}}; */

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o número a ser colocado na posição matriz[%d][%d]:", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}