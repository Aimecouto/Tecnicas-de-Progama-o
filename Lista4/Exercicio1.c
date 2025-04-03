#include <stdio.h>
//contar quantidade de caracteres em uma string

void count_string(char *qtd);

int main(){

    char str[1000];

    printf("\nDigite uma frase: ");
    fgets(str, sizeof(str), stdin);

    count_string(str);

}

void count_string(char *qtd){
    int count = 0;
    while(*qtd != '\0'){
        count++;
        qtd++;
    }

    printf("\nA quantidade de caracteres na string digitada eh: %d\n", count-1);
}