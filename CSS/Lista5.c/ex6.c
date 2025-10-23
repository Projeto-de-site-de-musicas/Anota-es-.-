#include <stdio.h>
#define qtd 30

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
        B[i] = A[i] * A[i] * A[i]; // Calculando o cubo
    }

    printf("Digite o número que deseja procurar na matriz B: ");
    scanf("%d", &num);

    int resultado = pesquisaSequencial(B, qtd, num);
    if (resultado != -1) {
        printf("O número %d foi encontrado na posição %d\n", num, resultado);
    } else {
        printf("O número %d não foi encontrado\n", num);
    }

    return 0;
}
