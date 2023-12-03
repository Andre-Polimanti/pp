#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Insira uma temperatura em Fahrenheit a ser convertida para Celsius.\n");
    scanf("%f",&f);
    c=5.0*(f- 32.0)/9.0;
    printf("%f",c);
    return 0;
}
