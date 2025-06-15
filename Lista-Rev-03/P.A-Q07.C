#include <stdio.h>
//Questão 7

//Swap Function
int swap(int *a, int *b);

int swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
//Main function
int main() {
    int a = 85, b = 25;
    
    printf("A = %d and B = %d\n", a, b);
    
    swap(&a, &b);
    
    printf("A = %d and B = %d", a, b);
    
    return 0;
}