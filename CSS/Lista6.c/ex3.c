#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int A[10], B[10][3], i;

    printf("Digite os 10 elementos da matriz A  ^^: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("---------------------\n");
    
    printf("Calculando a matriz B...\n");
    printf("---------------------\n");
    for (i = 0; i < 10; i++) {
        B[i][0] = A[i] + 5; 
        B[i][1] = fatorial(A[i]);
        B[i][2] = A[i] * A[i]; 
    }

    printf("\nMatriz B pronta! ÒwÓ \n");
    printf("---------------------\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\t%d\n", B[i][0], B[i][1], B[i][2]);
    }
    printf("---------------------\n");

    return 0;
}
