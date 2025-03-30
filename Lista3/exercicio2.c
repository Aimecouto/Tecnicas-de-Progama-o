#include <stdio.h>

int vogal(char c) {

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return 1;
    }
    return 0;
}

int main() {
    char c;
    printf("Digite uma vogal: ");
    scanf("%c", &c);
    
    if(vogal(c)){
        printf("O caractere '%c' eh uma vogal minuscula.\n", c);
    } else{
        printf("O caractere '%c' nao eh uma vogal minuscula.\n", c);
    }

    return 0;
}
