#include <stdio.h>
#define quantidade 6

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int A[quantidade], B[quantidade];
    int i;

    printf("Digite 6 numeros para a matriz A OwO:\n");
    for (i = 0; i < quantidade; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < quantidade; i++) {
        B[i] = fatorial(A[i]);
    }

    printf("A matriz B (fatoriais) é..:\n");
    for (i = 0; i < quantidade; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
