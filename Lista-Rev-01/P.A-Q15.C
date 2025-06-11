#include <stdio.h>
#include <math.h>

//Questão 15

int main()
{
    int segundos;
    printf("digite o tempo em segundos: ");
    scanf("%d", &segundos);

    printf("o tempo em minutos: %d, o tempo em horas: %d", (segundos/60), (segundos/3600 ));

    return 0;
}
