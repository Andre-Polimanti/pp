#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg,l;
    printf("Insira um valor em libras a ser convertido para quilogramas.\n");
    scanf("%f",&l);
    kg = l*0.45;
    printf("%f",kg);
    return 0;
}
