#include <stdio.h>

void linha(){
    for(int i=0; i<24; i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    
    linha();
    printf("CMP 1048\n");
    linha();
    printf("Tecnicas de Programacao\n");
    linha();

    return 0;
}