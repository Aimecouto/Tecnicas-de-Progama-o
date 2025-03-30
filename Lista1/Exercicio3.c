#include <stdio.h>

void desenha_retangulo_solido(int l, int c, char m){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            printf("%c", m);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){

    int l, c;
    char m;

    printf("Digite a quantidade de linhas e colunas para a matriz: ");

    scanf("%d %d", &l, &c);
    getchar();
    scanf("%c", &m);

    desenha_retangulo_solido(l, c, m);

    return 0;
}