#include <stdio.h>

void alterar_casos(char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

int main() {
    char str[] = "Olá Mundo!";
    
    alterar_casos(str);
    printf("Resultado após alteração de casos: %s\n", str);
    
    return 0;
}
