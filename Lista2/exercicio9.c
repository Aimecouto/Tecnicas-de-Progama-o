#include <stdio.h>

int verificarRegular(int num, int *resultado) {
    if (num <= 0) {
        *resultado = 0;
        return 0;
    }

    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;

    *resultado = (num == 1) ? 1 : 0;
    return 1;
}

int main() {
    int num, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (verificarRegular(num, &resultado)) {
        if (resultado)
            printf("O numero %d e regular.\n", num);
        else
            printf("O numero %d nao e regular.\n", num);
    } else {
        printf("Entrada invalida.\n");
    }

    return 0;
}