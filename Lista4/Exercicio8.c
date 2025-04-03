#include <stdio.h>

int encontrar_substring(char *str1, char *str2) {
    int i = 0, j = 0;
    
    while (str1[i] != '\0') {
        if (str1[i] == str2[j]) {
            int start = i;
            while (str1[i] == str2[j] && str2[j] != '\0') {
                i++;
                j++;
            }
            if (str2[j] == '\0') {
                return start;
            }
            i = start;
        }
        i++;
    }
    
    return -1;
}

int main() {
    char str1[] = "O rato roeu a roupa do rei de roma";
    char str2[] = "oeu";
    
    int resultado = encontrar_substring(str1, str2);
    printf("Índice da primeira ocorrência: %d\n", resultado);
    
    return 0;
}
