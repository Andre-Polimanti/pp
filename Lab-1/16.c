#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,cm;
    printf("Insira um comprimento em polegadas a ser convertido em centimetros.\n");
    scanf("%f",&p);
    cm= p*2.54;
    printf("%f",cm);
    return 0;
}
