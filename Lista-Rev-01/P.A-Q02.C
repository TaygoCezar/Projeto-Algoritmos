//Questão 2
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, soma, produto, subtr;
    float media;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1+num2;
    produto = num1*num2;
    subtr = num1-num2;
    media = (num1+num2)/2.0;

    printf("A soma: %d, o produto: %d, a diferença: %d, a média: %f", soma, produto, subtr, media);
    return 0;
}