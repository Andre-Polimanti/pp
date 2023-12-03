#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,c;
    printf("Insira uma temperatura em Kelvin a ser convertida para Celsius.\n");
    scanf("%f",&k);
    c=k-273.15;
    printf("%f",c);
    return 0;
}
