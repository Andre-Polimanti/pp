#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mil, km;
    printf("Insira uma distancia em quilometros a ser convertida para milhas.\n");
    scanf("%f",&km);
    mil=km/1.61;
    printf("%f",mil);
    return 0;
}