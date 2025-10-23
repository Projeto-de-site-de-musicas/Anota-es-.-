#include <stdio.h>
#define qtd 12

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
    int A[qtd], B[qtd], C[qtd];
    int i;

    printf("Digite %d números para a matriz A:\n", qtd);
    for (i = 0; i < qtd; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite %d números para a matriz B:\n", qtd);
    for (i = 0; i < qtd; i++) {
        scanf("%d", &B[i]);
    }

    bubbleSort(A, qtd);
    bubbleSort(B, qtd);

    for (i = 0; i < qtd; i++) {
        C[i] = A[i] + B[i];
    }

    bubbleSort(C, qtd);

    printf("Matriz C (ordenada):\n");
    for (i = 0; i < qtd; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
