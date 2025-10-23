#include <stdio.h>
#define qtd 15

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int A[qtd], B[qtd];
    int i;

    printf("Digite %d números para a matriz A:\n", qtd);
    for (i = 0; i < qtd; i++) {
        scanf("%d", &A[i]);
        B[i] = fatorial(A[i]);
    }

    bubbleSort(B, qtd);

    printf("Matriz B (fatoriais ordenados):\n");
    for (i = 0; i < qtd; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}