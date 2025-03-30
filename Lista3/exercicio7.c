#include <stdio.h>
#include <string.h>
//matriz com frase no meio

void caixa_com_texto_centralizado(char str[], int n, char c) {

    //Descobrir o tamanho da string
    int i=0, tamanho_str=0;
    while(str[i]!='\0' && str[i]!='\n'){
        tamanho_str++;
        i++;
    }

    int espacos = n-2-tamanho_str;
    
    if (espacos<0) {

        printf("%c", c);
        for (int i = 0; i < n - 2; i++) {
            printf("%c", str[i]);
        }
        printf("%c\n", c);
    } else {
        for (i=0; i<n; i++) {
            printf("%c", c);
        }
        printf("\n");

        printf("%c", c);
        for (i=0; i<espacos/2; i++) {
            printf(" ");  
        }
        
        printf("%s", str);  

        for (i=0; i<espacos-espacos/2; i++) {
            printf(" ");  
        }
        printf("%c\n", c);

        for (i=0; i<n; i++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    char str[1000];
    int n;
    char c;
    printf("Digite uma frase\n");
    printf("S = ");
    fgets(str, 1000, stdin);
    
    
    printf("Digite a largura da caixa\n");  
    printf("N = ");
    scanf("%d", &n);

    getchar();
    
    printf("Digite o caractere desejado\n");  
    printf("C = ");
    scanf("%c", &c);
    
    caixa_com_texto_centralizado(str, n, c);
    
    return 0;
}
