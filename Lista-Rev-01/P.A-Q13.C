#include <stdio.h>
#include <math.h>

//Questão 13

int main()
{
    float an, a1, q, n;
    n = 5;
    printf("Insira o primeiro termo da pg: ");
    scanf("%f", &a1);

    printf("Insira a razao da pg: ");
    scanf("%f", &q);

    an = a1*(pow(q, n-1));
    printf("o termo geral da pg: %f", an);

    return 0;
}
