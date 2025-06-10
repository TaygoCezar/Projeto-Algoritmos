//Questão 4
#include <stdio.h>
#include <math.h>


int main()
{
    float n1, n2, n3, n4, mediap;

    printf("digite um numero: ");
    scanf("%f", &n1);

    printf("digite um numero: ");
    scanf("%f", &n2);

    printf("digite um numero: ");
    scanf("%f", &n3);

    printf("digite um numero: ");
    scanf("%f", &n4);

    mediap = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/10;
    printf("a media ponderada: %f", mediap);


    return 0;
}