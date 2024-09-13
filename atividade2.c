#include <stdio.h>
#include <stdlib.h>

int soma(int N) {
    if (N == 1) {
        return 1;
    } else {
        return N + soma(N - 1);
    }
}

int main() {
    int N;

    printf("Diga um numero inteiro  para N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("O valor de N deve ser maior ou igual a 1.\n");
    } else {
        printf("O somatório dos numeros de 1 a %d é: %d\n", N, soma(N));
    }

    return 0;
}
