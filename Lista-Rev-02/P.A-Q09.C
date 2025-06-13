#include <stdio.h>
//Questão 9
int main()
{
    float account = 3000.0;
    printf("calculating fees...");

    for(int i = 1; i <= 6; i++) \\ I chose to set 6 months of fees
    {
        if(account>=3000 && account<5000)
        {
            account += account*0.01;
        }

        else if(account>=5000 && account<10000)
        {
            account += account*0.02;
        }

        else if(account>=10000)
        {
            account += account*0.03;
        }

        else{continue;}
    }

    printf("\nthe total value is: %.2f", account);

    return 0;
}