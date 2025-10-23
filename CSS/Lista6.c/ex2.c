#include <stdio.h>

#define linhas 7
#define colunas 2

int main() {
    int A[linhas], B[linhas], C[linhas][colunas], i;

    printf("Digite os elementos da matriz A ^^:\n");
    for (i = 0; i < linhas; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos da matriz B ^^:\n");
    for (i = 0; i < linhas; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < linhas; i++) {
        C[i][0] = A[i];
        C[i][1] = B[i];
    }

    printf("Matriz C OwO:\n");
    for (i = 0; i < linhas; i++) {
        printf("%d %d\n", C[i][0], C[i][1]);
    }

    return 0;
}
