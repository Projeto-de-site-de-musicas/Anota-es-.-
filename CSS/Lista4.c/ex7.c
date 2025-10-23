#include <stdio.h>

#define qtd 10

int main() {
    int a[qtd], b[qtd];
    int i;

    printf("Digite 10 numeros para a matriz A ^w^:\n");
    for (i = 0; i < qtd; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < qtd; i++) {
        b[i] = a[qtd - i - 1];
    }

    printf("A matriz B (invertida) é..:\n");
    for (i = 0; i < qtd; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
