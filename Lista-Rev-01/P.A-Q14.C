#include <stdio.h>
#include <math.h>

//Questão 14

int main()
{
    const int year = 2025;
    int admissionY, depedentsN;
    float salaryB;

    printf("Insira o ano de admiss�o: ");
    scanf("%d", &admissionY);

    printf("Insira o numero de dependentes: ");
    scanf("%d", &depedentsN);

    printf("Insira o salario base: ");
    scanf("%f", &salaryB);

    float readjustment = salaryB + ((salaryB/10)*(year - admissionY));
    int serviceT = ((int)(year-admissionY)/2)*100;
    int helpC = 50*depedentsN;

    float credits = readjustment + serviceT + helpC;

    float inss = salaryB*(1.0/4.0);
    float inpost = salaryB*(1.0/2.0) - inss;
    int health = 75*(1+depedentsN);

    float total_cust = inss + inpost + health;

    printf("O salario liquido: %f", (credits-total_cust));

    return 0;
}
