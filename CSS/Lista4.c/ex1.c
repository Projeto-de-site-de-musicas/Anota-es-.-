#include <stdio.h>
#define quantidade  5

int main() {
    int A[quantidade], B[quantidade];
    int i;

    printf("Digite 5 numeros para a matriz A ^^:\n");
    for (i = 0; i < quantidade; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < quantidade; i++) {
        B[i] = A[i] * 3;
    }

    printf("A matriz B é..:\n");
    for (i = 0; i <quantidade; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
