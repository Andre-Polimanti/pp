#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh, ms;
    printf("Insira uma velocidade em quilometros por hora a ser convertida para metros por segundo.\n");
    scanf("%f",&kmh);
    ms=kmh/3.6;
    printf("%f",ms);
    return 0;
}
