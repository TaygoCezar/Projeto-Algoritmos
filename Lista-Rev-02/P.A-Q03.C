#include <stdio.h>
//Questão 3
int main() {
    int r, sum;
    sum = 0;
    
    printf("Insert a range of numbers: "); 
    scanf("%d", &r);
    
    for(int i = 0; i<r; i++)
    {
        if(i%2 == 0){continue;}
        else
        {
            printf("%d, ", i);
            sum += i;    
        }
    }
    printf("total sum: %d", sum);
    
    return 0;
} 