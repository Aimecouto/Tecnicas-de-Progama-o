#include <stdio.h>
//Combinatoria

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

void calcular_combinacao(int n, int p, unsigned long long *resultado) {
    if (p > n) {
        *resultado = 0;
        return;
    }
    *resultado = fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main() {
    int n, p;
    unsigned long long resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);

    calcular_combinacao(n, p, &resultado);

    printf("O número de combinações C(%d, %d) é: %llu\n", n, p, resultado);

    return 0;
}