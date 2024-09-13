#include <stdio.h>

void imprima_Numeros(int N) {
    if (N < 0) {
        return;
    }

    imprima_Numeros(N - 1);

    printf("%d ", N);
}

int main() {
    int N;

    printf("Diga um numero inteiro  para N: ");
    scanf("%d", &N);

    printf("Numeros de 0 até %d em ordem crescente: ", N);
    imprima_Numeros(N);
    printf("\n");

    return 0;
}

