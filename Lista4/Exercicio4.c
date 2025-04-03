#include <stdio.h>
#include <stdlib.h>

char* concatenar_strings(char *str1, char *str2) {
    int len1 = 0, len2 = 0;
    
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    
    char *resultado = (char*) malloc((len1 + len2 + 1) * sizeof(char));
    
    for (int i = 0; i < len1; i++) {
        resultado[i] = str1[i];
    }
    
    for (int i = 0; i < len2; i++) {
        resultado[len1 + i] = str2[i];
    }
    
    resultado[len1 + len2] = '\0';
    
    return resultado;
}

int main() {
    char str1[] = "Olá ";
    char str2[] = "Mundo!";
    
    char *resultado = concatenar_strings(str1, str2);
    printf("Resultado da concatenação: %s\n", resultado); 
    
    free(resultado);
    return 0;
}
