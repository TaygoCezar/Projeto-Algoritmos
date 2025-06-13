#include <stdio.h>
// Questão 10
int main()
{
    int A, B, C;
    int bigger, smaller, average;
    printf("insira um valor para A: "); scanf("%d",&A);
    printf("insira um valor para B: "); scanf("%d",&B);
    printf("insira um valor para C: "); scanf("%d",&C);

    if(A==B && B==C){printf("Os números são iguais");}
    
    else if(A>B && A>C)
    {
        bigger = A;
        if(B>C){
            average = B;
            smaller = C;
            printf("maior: %d, menor: %d, médio: %d",bigger, smaller, average);
            
        }
        
        else
        {
            smaller = B;
            average = C;
            printf("maior: %d, menor: %d, médio: %d",bigger, smaller, average);
        }
    }
    
    else if(B>A && B>C)
    {
        bigger = B;
        if(A>C){
            average = A;
            smaller = C;
            printf("maior: %d, menor: %d, médio: %d",bigger, smaller, average);
            
        }
        
        else
        {
            smaller = A;
            average = C;
            printf("maior: %d, menor: %d, médio: %d",bigger, smaller, average);
        }
    }
    
    else if(C>B && C>A)
    {
        bigger = C;
        if(B>A){
            average = B;
            smaller = A;
            printf("maior: %d, menor: %d, médio: %d",bigger, smaller, average);
            
        }
        
        else
        {
            smaller = B;
            average = A;
            printf("maior: %d, menor: %d, médio: %d",bigger, smaller, average);
        }
    }

    return 0;
}