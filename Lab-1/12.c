#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mil, km;
    printf("Insira uma distancia em milhas a ser convertida para quilometros.\n");
    scanf("%f",&mil);
    km = 1.61*mil;
    printf("%f",km);
    return 0;
}
