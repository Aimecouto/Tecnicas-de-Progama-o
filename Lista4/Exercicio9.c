#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* soma_numeros_gigantes(char *num1, char *num2) {
    int len1 = strlen(num1), len2 = strlen(num2);
    int max_len = len1 > len2 ? len1 : len2;
    char *resultado = (char*) malloc((max_len + 2) * sizeof(char));
    
    int carry = 0, i = len1 - 1, j = len2 - 1, k = 0;
    resultado[max_len + 1] = '\0';
    
    while (i >= 0 || j >= 0 || carry > 0) {
        int digito1 = i >= 0 ? num1[i] - '0' : 0;
        int digito2 = j >= 0 ? num2[j] - '0' : 0;
        
        int soma = digito1 + digito2 + carry;
        
        resultado[k] = (soma % 10) + '0';
        carry = soma / 10;
        
        i--;
        j--;
        k++;
    }
    
    //Reverter a string do resultado
    for (int l = 0; l < k / 2; l++) {
        char temp = resultado[l];
        resultado[l] = resultado[k - l - 1];
        resultado[k - l - 1] = temp;
    }
    
    return resultado;
}

int main() {
    char num1[] = "565610";
    char num2[] = "45646545465";
    
    char *resultado = soma_numeros_gigantes(num1, num2);
    printf("Resultado da soma: %s\n", resultado);
    
    free(resultado);
    return 0;
}
