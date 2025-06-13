#include <stdio.h>
// Questão 10
int main()
{
    float A = 0.3, B = 0.4, index;
    
    printf("Insert a  value for the index pollution: "); 
    scanf("%f", &index);
    
    if(index>=0.05 && index<= 0.30){printf("Pollution index: over normal scale");}
    
    else if(index>0.3 && index<0.4){printf("Warning: Industry A must interrupt their operation!");}
    
    else if(index>=0.4 && index<0.5){printf("Warning: Industry A and B must stop their work!");}
    
    else if(index>=0.5){printf("Warning: Stop the operation of all industries");}
    
    return 0;
}