#include <stdio.h>

void imprima_Numeros_Decrescentes(int N) {
    if (N < 0) {
        return;
    }

    printf("%d ", N);

    imprima_Numeros_Decrescentes(N - 1);
}

int main() {
    int N;

    printf("Diga um numero inteiro para N: ");
    scanf("%d", &N);

    printf("Numeros de %d até 0 em ordem decrescente: ", N);
    imprima_Numeros_Decrescentes(N);
    printf("\n");

    return 0;
}