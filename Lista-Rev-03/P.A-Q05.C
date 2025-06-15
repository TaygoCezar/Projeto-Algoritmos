#include <stdio.h>
//Questão 5

//Sum and product function
void somaprod(int a, int b, int *p, int *q);

void somaprod(int a, int b, int *p, int *q)
{
    *p = a + b;
    *q = a*b;
}


//Main function
int main() {
    int a, b, p, q;
    
    printf("insert a number: "); scanf("%d",&a);
    printf("insert a number: "); scanf("%d",&b);
    
    somaprod(a, b, &p, &q);
    printf("the sum of the therms A and B: %d, and the product is: %d", p, q);
    
    return 0;
}