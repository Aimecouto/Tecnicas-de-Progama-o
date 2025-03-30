#include <stdio.h>

void linha(){
    for(int i=0; i<24; i++){
        printf("*");
    }
    printf("\n");
}

void linha2(char n){
    for(int i=0; i<24; i++){
        printf("%c", n);
    }
    printf("\n");
}

int main(){
    
    linha();
    printf("CMP 1048\n");
    linha2('@');
    printf("Tecnicas de Programacao\n");
    linha2('+');

    return 0;
}