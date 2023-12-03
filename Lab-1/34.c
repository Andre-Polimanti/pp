#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,pi;
    pi=3.141592;
    printf("Insira o valor do raio de um círculo para adquirir a área do círculo correspondente.\n");
    scanf("%f",&x);
    y=x*x*pi;
    printf("%f",y);
    return 0;
}
