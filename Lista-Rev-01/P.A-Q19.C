#include <stdio.h>
#include <math.h>

//Questão 19

int main()
{
    float a, s0, v0, t;
    printf("insira o espaco inicial: ");
    scanf("%f", &s0);

    printf("insira a aceleracao: ");
    scanf("%f", &a);

    printf("insira a velocidade inicial: ");
    scanf("%f", &v0);

    printf("insira o tempo: ");
    scanf("%f", &t);

    float espaco = s0 + v0*t + (a*pow(t, 2))/2;
    float velocidade = v0 + a*t;

    printf("o espaco: %f", espaco);
    printf("\na velocidade: %f", velocidade);

    return 0;
}
