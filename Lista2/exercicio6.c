#include <stdio.h>
#include <stdlib.h>

// fatorial
void fatorial(int* n) {
    int i, fat = 1;

    for (i = *n; i > 0; i--) {
        fat *= i;
    }
    printf("%d", fat);
}

int main() {
    printf("\nDigite um numero N para calcular seu fatorial: ");

    int* n = (int*)malloc(sizeof(int));
    if (n == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    scanf("%d", n);

    fatorial(n);

    free(n);
    return 0;
}
