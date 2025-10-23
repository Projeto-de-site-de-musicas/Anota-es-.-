#include <stdio.h>

int main() {
    int A[4], B[4], C[4][2], i;

    printf("Digite os 4 elementos da matriz A ^^:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 4 elementos da matriz B ^^:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &B[i]);
    }
    printf("---------------------\n");
    printf("Calculando a matriz C...️\n");
    printf("---------------------\n");
    for (i = 0; i < 4; i++) {
        C[i][0] = 2 * A[i]; 
        C[i][1] = B[i] - 5; 
    }

    printf("\nMatriz C pronta! ^W^\n");
    printf("---------------------\n");
    for (i = 0; i < 4; i++) {
        printf("%d\t%d\n", C[i][0], C[i][1]);
    }
    printf("---------------------\n");

    return 0;
}
