#include <stdio.h>
#include <math.h>

//Questão 17

int main()
{
    int n1, n2, n3;

    printf("digite o valor 1: ");
    scanf("%d", &n1);

    printf("digite o valor 2: ");
    scanf("%d", &n2);

    printf("digite o valor 3: ");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3)
        {
        if(n2>n3)
            {
            printf("%d - %d - %d", n3, n2, n1);
            }
        else if(n3>n2)
            {
            printf("%d - %d - %d", n2, n3, n1);
            }
        }

     else if(n2>n1 && n2>n3)
        {
        if(n1>n3)
            {
            printf("%d - %d - %d", n3, n1, n2);
            }
        else if(n3>n1)
            {
            printf("%d - %d - %d", n1, n3, n2);
            }
        }

     if(n3>n1 && n3>n2)
        {
        if(n2>n1)
            {
            printf("%d - %d - %d", n1, n2, n3);
            }
        else if(n1>n2)
            {
            printf("%d - %d - %d", n2, n1, n3);
            }
        }

    return 0;
}
