#include <stdio.h>

int converter_para_inteiro(char *str) {
    int resultado = 0, i = 0;
    
    while (str[i] != '\0') {
        resultado = resultado * 10 + (str[i] - '0');
        i++;
    }
    
    return resultado;
}

int main() {
    char str[] = "12345";
    
    int numero = converter_para_inteiro(str);
    printf("Resultado da conversão: %d\n", numero);
    
    return 0;
}
