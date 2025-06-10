// Questão 7
#include <stdio.h>
#include <math.h>

int main()
{
    const float pi = 3.14;
    float raio, area, perimetro;

    printf("insira o raio: ");
    scanf("%f", &raio);

    printf("o perimetro: %f, a area: %f", (2*pi*raio), (pi*(pow(raio, 2))));

    return 0;
}
