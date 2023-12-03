#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Insira uma temperatura em Celsius a ser convertida para Fahrenheit.\n");
    scanf("%f",&c);;
    f=c*(9.0/5.0)+32.0;
    printf("%f",f);
    return 0;
}
