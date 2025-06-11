#include <stdio.h>
#include <math.h>

//Questão 18

int main()
{
    float n1, n2, n3;

    printf("digite o valor 1: ");
    scanf("%f", &n1);

    printf("digite o valor 2: ");
    scanf("%f", &n2);

    printf("digite o valor 3: ");
    scanf("%f", &n3);

    if(n1>n2 && n1>n3)
        {
        if(n2>n3)
            {
            printf("%.2f - %.2f - %.2f", n3, n2, n1);
            }
        else if(n3>n2)
            {
            printf("%.2f - %.2f - %.2f", n2, n3, n1);
            }
        }

     else if(n2>n1 && n2>n3)
        {
        if(n1>n3)
            {
            printf("%.2f - %.2f - %.2f", n3, n1, n2);
            }
        else if(n3>n1)
            {
            printf("%.2f - %.2f - %.2f", n1, n3, n2);
            }
        }

     if(n3>n1 && n3>n2)
        {
        if(n2>n1)
            {
            printf("%.2f - %.2f - %.2f", n1, n2, n3);
            }
        else if(n1>n2)
            {
            printf("%.2f - %.2f - %.2f", n2, n1, n3);
            }
        }

    return 0;
}
