#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,c;
    printf("Insira uma temperatura em Celsius a ser convertida em Kelvin.\n");
    scanf("%f",&c);
    k=c+273.15;
    printf("%f",k);
    return 0;
}
