#include <stdio.h>

int comparar_strings(char *str1, char *str2) {
    int i = 0;
    
    //Comparar as strings enquanto forem iguais
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    
    //Retornar o resultado baseado nos caracteres diferentes ou no tamanho das strings
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] < str2[i]) {
        return -1;
    } else {
        return 1; 
    }
}

int main() {
    char str1[] = "macaco";
    char str2[] = "mania";
    
    int resultado = comparar_strings(str1, str2);
    printf("Resultado da comparação: %d\n", resultado);
    
    return 0;
}
