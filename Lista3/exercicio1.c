#include <stdio.h>

int consoante(char c) {
    if(c>65 && c<=90 && c!=69 && c!=73 && c!=79 && c!=85){//maiusculas
        return 1;
    } 
    else{
        if(c>97 && c<=122 && c!=101 && c!=105 && c!=111 && c!=117){//minusculas
            return 1;
        }
    }

    return 0;
}

int main() {
    
    char c;
    printf("\nDigite uma  uma letra: ");
    scanf("%c", &c);

    if (consoante(c)){
        printf("O caractere '%c' e uma vogal minuscula.\n", c);
    } else{
        printf("O caractere '%c' nao e uma vogal minuscula.\n", c);
    }

    return 0;
}
