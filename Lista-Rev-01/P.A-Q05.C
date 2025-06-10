//Questão 5
#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    printf("insira um numero: ");
    scanf("%f", &num);

    printf("o numero: %f, seu quadrado: %f, sua raiz: %f", num, pow(num, 2),sqrt(num));

    return 0;
}

