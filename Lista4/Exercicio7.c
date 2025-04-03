#include <stdio.h>
#include <stdlib.h>

char** dividir_string(char *str, char delimitador, int *num_substrings) {
    int i = 0, j = 0, k = 0;
    *num_substrings = 1;
    
    while (str[i] != '\0') {
        if (str[i] == delimitador) {
            (*num_substrings)++;
        }
        i++;
    }
    
    char **substrings = (char**) malloc(*num_substrings * sizeof(char*));
    
    i = 0;
    for (int index = 0; index < *num_substrings; index++) {
        int len = 0;
        while (str[i + len] != '\0' && str[i + len] != delimitador) {
            len++;
        }
        
        substrings[index] = (char*) malloc((len + 1) * sizeof(char));
        
        for (int l = 0; l < len; l++) {
            substrings[index][l] = str[i + l];
        }
        
        substrings[index][len] = '\0';
        i += len + 1;
    }
    
    return substrings;
}

int main() {
    char str[] = "abc-def-ghijk-l-mn";
    int num_substrings;
    
    char **resultado = dividir_string(str, '-', &num_substrings);
    
    for (int i = 0; i < num_substrings; i++) {
        printf("Substring %d: %s\n", i + 1, resultado[i]);
        free(resultado[i]);
    }
    
    free(resultado);
    return 0;
}
