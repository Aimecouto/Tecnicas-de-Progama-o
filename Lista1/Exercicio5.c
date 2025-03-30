#include <stdio.h>

void desenha_retangulo_preenchido(int l, int c, char m, char n){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            if(i==0 || i==l-1 || j==0 || j==c-1){
                printf("%c", m);
            } else {
                printf("%c", n);
            }
        }
        printf("\n");
    }
}

int main(){

    int l, c;
    char m, n;

    printf("Escolha a liha e coluna:\n");
    scanf("%d %d", &l, &c);
    printf("\n");

    getchar();
    printf("Escolha os caracteres 1 e 2:\n");
    scanf("%c %c", &m, &n);
    printf("\n");

    desenha_retangulo_preenchido(l, c, m, n);

    return 0;
}