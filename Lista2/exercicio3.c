#include <stdio.h>

void media(int nota1, int nota2, int nota3){
    float media = (float)(nota1 + nota2 + nota3) / 3;
    printf("Media: %.2f\n", media);
}

int main(){
    
    int nota1, nota2, nota3;
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    media(nota1, nota2, nota3);

    return 0;
}