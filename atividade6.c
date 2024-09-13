
#include <stdio.h>
#include <stdlib.h>

int soma_Vetor(int arr[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    } else {
        return arr[tamanho - 1] + soma_Vetor(arr, tamanho - 1);
    }
}

float mediaVetor(int arr[], int tamanho) {
    int soma = soma_Vetor(arr, tamanho);
    
    if (tamanho > 0) {
        return (float)soma / tamanho;
    } else {
        return 0.0; 
    }
}

int main() {
    int N;

    printf("Digite o numero de elementos no vetor: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O numero de elementos deve ser maior que 0.\n");
        return 1;
    }

    int vetor[N];

    printf("Digite os %d elementos do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    float media = mediaVetor(vetor, N);

    printf("A média dos elementos do vetor é: %.2f\n", media);

    return 0;
}

