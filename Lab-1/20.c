#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg,l;
    printf("Insira um valor em quilogramas a ser convertido para libras.\n");
    scanf("%f",&kg);
    l=kg/0.45;
    printf("%f",l);
    return 0;
}