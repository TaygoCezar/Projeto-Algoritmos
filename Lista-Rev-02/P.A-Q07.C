#include <stdio.h>
//Questão 7
int main() 
{
    int r = 10;
    
    for(int i = 0; i < r; i++)
    {
        if(i == 5)
        {
            printf("closing the program"); 
            break;
        }
        
        else{printf("...\n");}
        
    }
    
    return 0;
} 