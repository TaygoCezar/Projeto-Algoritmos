#include <stdio.h>
//Questão 2
int main() 
{
    int i = 0, j = 1, n, aux;
    
    printf("insert a number: "); 
    scanf("%d",&n);
    
    for(int k = 0; k < n; k++)
    {
        printf("%d\n", i);
        aux = i + j;
        i = j;
        j = aux;
    }
    
    return 0;
}