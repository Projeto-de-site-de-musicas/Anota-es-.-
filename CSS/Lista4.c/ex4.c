#include <stdio.h>
#define quantidade 5

int main() {
    int A[quantidade], B[quantidade], C[quantidade * 2];
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
        C[i] = A[i];
    }
    for (i = 0; i < quantidade; i++) {
        C[i + quantidade] = B[i];
    }

    printf("A matriz C (juncao) é..:\n");
    for (i = 0; i < quantidade * 2; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
