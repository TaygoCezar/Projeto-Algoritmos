#include <stdio.h>
//Questão 1

void fat(int n);

void fat(int n)
{
    int fatorial = 1;
    for(int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    printf("the result of the factorial: %d", fatorial);
}

//função principal

int main() 
{
    int num;
    printf("chose a number for n!: "); scanf("%d", &num);
    
    fat(num);
    
    return 0;
}