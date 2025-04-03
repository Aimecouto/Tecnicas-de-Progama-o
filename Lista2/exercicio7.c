#include <stdio.h>
#include <stdlib.h>
//primo

void primo(int *n) {
    int is_prime = 1;
    if (*n <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i <= *n / 2; i++) {
            if (*n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("\nO numero %d eh primo.\n", *n);
    } else {
        printf("\nO numero %d nao eh primo.\n", *n);
    }
}

int main() {
    printf("\nDigite um numero N: ");

    int *n = (int *)malloc(sizeof(int));
    if (n == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    scanf("%d", n);
    primo(n);
    free(n);

    return 0;
}
