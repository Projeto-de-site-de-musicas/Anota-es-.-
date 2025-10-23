#include <stdio.h>
#define quantidade 5

int main() {
    int A[quantidade], B[quantidade], C[quantidade];
    int i;

    printf("Digite 5 numeros para a matriz A ^^:\n");
    for (i = 0; i < quantidade; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 5 numeros para a matriz B ^^:\n");
    for (i = 0; i < quantidade; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < quantidade; i++) {
        C[i] = A[i] - B[i];
    }

    printf("A matriz C (subtracao) é..:\n");
    for (i = 0; i < quantidade; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
