#include <stdio.h>
#define qtd 20

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

int pesquisaSequencial(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int A[qtd], B[qtd];
    int i, num;

    printf("Digite %d números para a matriz A:\n", qtd);
    for (i = 0; i < qtd; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i] + 2;
    }

    bubbleSort(B, qtd);

    printf("Matriz B (ordenada):\n");
    for (i = 0; i < qtd; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Digite o número que deseja procurar: ");
    scanf("%d", &num);

    int resultado = pesquisaSequencial(B, qtd, num);
    if (resultado != -1) {
        printf("O número %d foi encontrado na posição %d\n", num, resultado);
    } else {
        printf("O número %d nao foi encontrado\n", num);
    }

    return 0;
}
