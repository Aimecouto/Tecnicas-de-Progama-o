#include <stdio.h>
#include <string.h>
//Digitar uma string e verificar se é um palindromo ou nao, retornar 1 p/ V e 0 p/ F

int palindromo(char str[], char str1[]) {
    int i, count=0;
    
    //definir tamanho
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {  // Ignora o '\n' inserido pelo fgets
            count++;
        }
    }
    
    //tirar espaçamento
    int j=0;
    for(i=0; i<count; i++){
        if(str[i]!=' '){
            str1[j]=str[i];
        }
        j++;
    }
    j=0;
    
    //Transformar todas as letras em minusculas
    for(i=0; i<count; i++){
        
        if(str[i] != ' '){
            
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str1[j] = str[i] + 97 - 65;  
            } else {
                str1[j] = str[i];
            }
            
            j++;
        }
    }
    str1[j] = '\0';

    for (i = 0; i < j / 2; i++) {
        if (str1[i] != str1[j - i - 1]) {
            return 0;  // Não é palíndromo
        }
    }
    
    return 1;
}


int main(){
    
    char str[1000], str1[1000];
    printf("\nDigite algo:");
    fgets(str, 1000, stdin);
    
    if(palindromo(str, str1)){
        printf("\nEh palindromo!\n");
    } else{
        printf("\nNao eh um palindromo!\n");
    }
    
    return 0;
}
