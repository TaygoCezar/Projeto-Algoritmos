//Questão 6
#include <stdio.h>
#include <math.h>

int main()
{
    float base, altura, area, perimetro;
    printf("insira a base: ");
    scanf("%f", &base);

    printf("insira a altura: ");
    scanf("%f", &altura);

    float diagonal = sqrt(pow(base,2 )+ pow(altura, 2));

    printf("a area: %f, o perimetro: %f, diagonal: %f", (base*altura), ((base*2)+(altura*2)), diagonal);

    return 0;
}
