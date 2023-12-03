#include <stdio.h>
#include <stdlib.h>

int temp(int a);

int main()
{
    float T;
    printf("Digite uma temperatura em Celsius a ser convertida para Fahrenheit.\n");
    scanf("%f",&T);
    T=temp(T);
    printf("\nA temperatura em Fahrenheit eh %f.",T);

return 0;
}
int temp(int a){
    int F=a*9/5+32;
    return F;
}