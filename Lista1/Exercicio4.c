#include <stdio.h>

void desenha_retangulo(int l, int c, char m){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            if(i==0 || i==l-1 || j==0 || j==c-1){
                printf("%c", m);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){

    int l, c;
    char m;

    scanf("%d %d", &l, &c);
    getchar();
    scanf("%c", &m);


    desenha_retangulo(l, c, m);

    return 0;
}