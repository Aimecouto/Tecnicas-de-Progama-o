#include <stdio.h>

double logaritmo_natural(double x) {
    if (x <= 0) {
        printf("Erro: o logaritmo de um número menor ou igual a zero não está definido.\n");
        return -1;
    }

    double resultado = 0.0;
    double termo = (x - 1) / (x + 1);
    double termo_quadrado = termo * termo;
    double num = termo;
    double denom = 1;
    
    for (int i = 1; i <= 1000; i += 2) {
        resultado += num / denom;
        num *= termo_quadrado;
        denom += 2;
    }
    
    return 2 * resultado;
}

double logaritmo_base(double a, double b) {

    double log_a = logaritmo_natural(a);
    double log_b = logaritmo_natural(b);
    
    if (log_a == -1 || log_b == -1) {
        return -1;
    }
    
    return log_a / log_b;
}

int main() {
    double a, b;

    printf("Digite o valor do logaritmando: ");
    scanf("%lf", &a);
    printf("Digite a base do logaritmo: ");
    scanf("%lf", &b);

    if (b <= 0 || b == 1) {
        printf("Erro: a base deve ser maior que 0 e diferente de 1.\n");
        return -1;
    }
    
    double resultado = logaritmo_base(a, b);
    
    if (resultado != -1) {
        printf("O logaritmo de %.2lf na base %.2lf é %.4lf\n", a, b, resultado);
    }
    
    return 0;
}
