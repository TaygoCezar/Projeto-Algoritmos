#include <stdio.h>
#include <math.h>
//Questão 6

//Distance function
float distance(float x0, float y0, float x1, float y1);

float distance(float x0, float y0, float x1, float y1)
{
    float d;
    d = pow(x1-x0, 2) + pow(y1-y0, 2);
    d = sqrt(d);
    return d;
}
//Main function
int main() {
    float x0, x1, y0, y1;
    
    printf("insert a number for X0: "); scanf("%f",&x0);
    printf("insert a number for Y0: "); scanf("%f",&y0);
    printf("insert a number for X1: "); scanf("%f",&x1);
    printf("insert a number for Y1: "); scanf("%f",&y1);
    
    printf("the result is: %f", distance(x0,x1,y0,y1));
    
    return 0;
}