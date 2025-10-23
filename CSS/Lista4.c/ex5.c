#include <stdio.h>
#define quantid_a 20
#define quantid_b 30
#define quantid_c (quantid_a + quantid_b)

int main() {
    int a[quantid_a], b[quantid_b], c[quantid_c];
    int i;
    
    printf("Digite %d numeros para a matriz A ^^:\n", quantid_a);
    for (i = 0; i < quantid_a; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite %d numeros para a matriz B ^^:\n", quantid_b);
    for (i = 0; i < quantid_b; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < quantid_a; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < quantid_b; i++) {
        c[i + quantid_a] = b[i];
    }

    printf("A matriz C (juncao) é..:\n");
    for (i = 0; i < quantid_c; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
