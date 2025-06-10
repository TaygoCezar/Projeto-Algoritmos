//Questão 3
#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2, nota3, nota4, nota5, media;
    printf("digite uma nota: ");
    scanf("%f", &nota1);

    printf("digite uma nota: ");
    scanf("%f", &nota2);

    printf("digite uma nota: ");
    scanf("%f", &nota3);

    printf("digite uma nota: ");
    scanf("%f", &nota4);

    printf("digite uma nota: ");
    scanf("%f", &nota5);

    media = (nota1+nota2+nota3+nota4+nota5)/5;
    printf("a media das notas: %f", media);

    return 0;
}
