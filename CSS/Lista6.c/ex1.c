#include <stdio.h>

#define linhas 5
#define colunas 3

int main() {
    int A[linhas][colunas], B[linhas][colunas], C[linhas][colunas], i, j;

    printf("Digite os elementos da matriz A ^^:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B ^^:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matriz C (soma de A e B) OwO:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}