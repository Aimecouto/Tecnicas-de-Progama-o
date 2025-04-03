#include <stdio.h>
//i-ésimo termo da série de Fibonacci

int fibonacci(int i, int *result) {
    if (i < 0) {
        return -1;
    }
    if (i == 0) {
        *result = 0;
        return 0;
    }
    if (i == 1) {
        *result = 1;
        return 0;
    }

    int a = 0, b = 1, temp;
    for (int j = 2; j <= i; j++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    *result = b;
    return 0;
}

int main() {
    int i, result;

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    if (fibonacci(i, &result) == 0) {
        printf("O %dº termo da série de Fibonacci é: %d\n", i, result);
    } else {
        printf("Índice inválido!\n");
    }

    return 0;
}