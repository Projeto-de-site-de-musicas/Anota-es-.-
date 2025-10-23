#include <stdio.h>
#define quantd 8

int main() {
    int a[quantd], b[quantd];
    int i;

    printf("Digite 8 numeros para a matriz a ^^:\n");
    for (i = 0; i < quantd; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < quantd; i++) {
        b[i] = a[i] * a[i];
    }

    printf("A matriz b (quadrados) é..:\n");
    for (i = 0; i < quantd; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
