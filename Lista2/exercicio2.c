#include <stdio.h>
#include <math.h>

void esfera(float raio, float volume){
    float pi = 3.14;
    volume = ((4*pi)/3) * pow(raio, 3);
    printf("%.2f\n", volume);
}

int main(){ 

    float raio, volume;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    printf("\nO volume da esfera e: ");
    esfera(raio, volume);
    printf("\n");
    
    return 0;
}