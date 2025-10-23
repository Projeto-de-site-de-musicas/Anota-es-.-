#include <stdio.h>
#define qtd 12

void troca(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSortDecrescente(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                troca(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int A[qtd];
    int i;

    printf("Digite %d números:\n", qtd);
    for (i = 0; i < qtd; i++) {
        scanf("%d", &A[i]);
    }

    bubbleSortDecrescente(A, qtd);

    printf("Os numeros em ordem decrescente são..:\n");
    for (i = 0; i < qtd; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
