#include <stdio.h>
#define qtd 40

void bubbleSort(int notas[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (notas[j] > notas[j + 1]) {
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}

int pesquisaSequencial(int notas[], int n, int notaProcurada) {
    for (int i = 0; i < n; i++) {
        if (notas[i] == notaProcurada) {
            return i;
        }
    }
    return -1;
}

int main() {
    int notas[qtd], i, notaProcurada;

    printf("Digite as notas dos %d alunos ^w^:\n", qtd);
    for (i = 0; i < qtd; i++) {
        scanf("%d", &notas[i]);
    }

    bubbleSort(notas, qtd);

    printf("Notas ordenadas:\n");
    for (i = 0; i < qtd; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n");

    printf("Digite a nota que deseja procurar ^^: ");
    scanf("%d", &notaProcurada);

    int resultado = pesquisaSequencial(notas, qtd, notaProcurada);
    if (resultado != -1) {
        printf("A nota %d foi encontrada na posição %d\n", notaProcurada, resultado);
    } else {
        printf("A nota %d não foi encontrada\n", notaProcurada);
    }

    return 0;
}
