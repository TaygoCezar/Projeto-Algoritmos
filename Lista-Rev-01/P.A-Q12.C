#include <stdio.h>
#include <math.h>

//Questão 12

int main()
{
    float razao, termo1;

    printf("Insira a razao: ");
    scanf("%f", &razao);

    printf("Insira o primeiro termo:");
    scanf("%f", &termo1);

    printf("o decimo termo: %f", (termo1+((10-1)*razao)));

    return 0;
}
