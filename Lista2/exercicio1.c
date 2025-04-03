#include <stdio.h>

void circulo(float raio, float area){
    float pi = 3.14;
    area = pi*(raio*raio);
    printf("%.2f\n", area);
}

int main(){ 

    float raio, area;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    printf("\nA area do circulo e: ");
    circulo(raio, area);
    printf("\n");
    
}