#include <stdio.h>
//Questão 6
int main() 
{
    int n, factorial = 1, i;
    
    printf("Insert a number n for N!: "); 
    scanf("%d", &n);
    
    i = n;
    
    do
    {
        factorial *= i;
        i--;    
    }
    while(i>=1);

    printf("the factorial %d! is equal to: %d", n, factorial);

    return 0;
} 