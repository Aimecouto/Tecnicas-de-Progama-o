#include <stdio.h>

void month(int n) {
    const char *months[] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    if (n >= 1 && n <= 12) {
        printf("%s\n", months[n - 1]);
    } else {
        printf("Erro!\n");
    }
}

int main() {
    printf("\nDigite um numero correspondente a um mes: ");
    int n;
    scanf("%d", &n);

    month(n);

    return 0;
}
