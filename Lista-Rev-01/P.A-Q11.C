#include <stdio.h>
#include <math.h>

//Questão 11

int main()
{
    float nota1, nota2;

    printf("Insira a primeira nota:");
    scanf("%f", &nota1);

    printf("Insira a segunda nota:");
    scanf("%f", &nota2);

    printf("a m�dia real: %f, a media truncada: %d", (nota1+nota2)/2.0, (int)((nota1+nota2)/2));

    return 0;
}
