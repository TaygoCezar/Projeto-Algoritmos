#include <stdio.h>

int main() 
{
    float n1, n2, n3, m;
    printf("nota 1: "); scanf("%f", &n1);
  
    printf("nota 2: "); scanf("%f", &n2);

    printf("nota 3: "); scanf("%f", &n3);
    
    m = (n1+n2+n3)/3;
    if(m < 8){printf("você reprovou...");}
    else{printf("você foi aprovado...");}

    return 0;
}