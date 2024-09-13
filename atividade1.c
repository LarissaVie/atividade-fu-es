#include <stdio.h>
#include <stdlib.h>

int soma_dos_Cubos(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * n * n + soma_dos_Cubos(n - 1);
    }
}

int main() {
    int n;

    printf("Digite o para a letra n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O valor de n deve ser maior ou igual a 1.\n");
    } else {
        printf("A soma dos primeiros %d cubos é: %d\n", n, soma_dos_Cubos(n));
    }

    return 0;
}
