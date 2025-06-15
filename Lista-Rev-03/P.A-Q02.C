#include <stdio.h>
//Questão 2

int fat(int n);

int fat(int n)
{
    int fatorial = 1;
    for(int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}

//função principal

int main() 
{
    int num;
    printf("chose a number for n!: "); scanf("%d", &num);
    
    printf("the result of the factorial: %d", fat(num));
    
    return 0;
}