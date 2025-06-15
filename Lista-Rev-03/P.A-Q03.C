#include <stdio.h>
//Questão 3

//Fatorial function
int fat(int n);

int fat(int n)
{
    int fatorial = 1;
    for(int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}
//Combination function
int combination(int n, int nk);

int combination(int n, int nk)
{
    int a;
    a = n/nk;
    return a;
}
//Main function
int main() 
{
    int n, k, a, b;
  
    printf("Chose a N for the combination: "); scanf("%d",&n);
    printf("Chose a K for the combination: "); scanf("%d",&k);

    a = fat(n);;
    b = fat(n-k);

    printf("the number of combinations is: %d", combination(a, b));

    return 0;
}