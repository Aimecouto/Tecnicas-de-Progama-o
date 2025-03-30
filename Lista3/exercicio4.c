#include <stdio.h>

int nperfeito(int num) {
    int soma = 0;
    
    for (int i=1; i<=num/2; i++) {
        if (num%i==0) {
            soma+=i;
        }
    }
    
    if (soma==num) {
        return 1;
    }
    return 0;
}

void divisores(int num) {
    printf("Divisores de %d: ", num);
    for (int i=1; i<=num/2; i++) {
        if (num%i==0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    for (int i=1; i<=10000; i++) {
        if (nperfeito(i)) {
            divisores(i);
            printf("%d = ", i);
            for (int j=1; j<=i/2; j++) {
                if (i%j==0) {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}