#include <stdio.h>
#include <math.h>

//Questão 16

int main()
{
    int A, B, C;
    int maior, medio, menor;

    printf("digite o valor A: ");
    scanf("%d", &A);

    printf("digite o valor B: ");
    scanf("%d", &B);

    printf("digite o valor C: ");
    scanf("%d", &C);

    if(A==B==C){printf("sao numeros iguais!");}

    else if(A>B && A>C)
        {
        maior = A;
        if(B>C)
            {
            medio = B;
            menor = C;
            printf("o maior numero: %d, o numero medio: %d, o menor numero: %d", maior, medio, menor);
            }
        else
            {
            medio = C;
            menor = B;
            printf("o maior numero: %d, o numero medio: %d, o menor numero: %d", maior, medio, menor);
            }
        }

    else if(B>A && B>C)
        {
        maior = B;
        if(A>C)
            {
            medio = A;
            menor = C;
            printf("o maior numero: %d, o numero medio: %d, o menor numero: %d", maior, medio, menor);
            }
        else
            {
            medio = C;
            menor = A;
            printf("o maior numero: %d, o numero medio: %d, o menor numero: %d", maior, medio, menor);
            }
        }

     else if(C>B && C>A)
        {
        maior = C;
        if(B>A)
            {
            medio = B;
            menor = A;
            printf("o maior numero: %d, o numero medio: %d, o menor numero: %d", maior, medio, menor);
            }
        else
            {
            medio = A;
            menor = B;

            printf("o maior numero: %d, o numero medio: %d, o menor numero: %d", maior, medio, menor);
            }
        }

    return 0;
}
