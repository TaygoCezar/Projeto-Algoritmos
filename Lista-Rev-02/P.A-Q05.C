#include <stdio.h>
//Questão 5
int main() 
{
    int i = 0, j = 1, n, aux, sum = 0;
    
    printf("insert a number: "); 
    scanf("%d",&n);
    
    for(int k = 0; k < n; k++)
    {
        sum += i;
        aux = i + j;
        i = j;
        j = aux;
    }
    
    printf("the total sum is equal to: %d", sum);

    return 0;
}