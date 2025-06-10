//Questão 10
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("insira um numero: ");
    scanf("%d", &num);

    printf("o numero antecessor: %d, o numero: %d, o sucessor: %d", (num-1), num, (num+1));

    return 0;
}
