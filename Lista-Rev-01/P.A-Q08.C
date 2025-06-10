//Questão 8
#include <stdio.h>
#include <math.h>

int main()
{
    float lado, perim, area, diagonal;

    printf("insira um lado do quadrado: ");
    scanf("%f", &lado);

    printf("a area: %f, perimetro: %f, diagonal: %f", pow(lado, 2), lado*4, sqrt(2)*lado);

    return 0;
}
