#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,cm;
    printf("Insira um comprimento em centimetros a ser convertido para polegadas.\n");
    scanf("%f",&cm);
    p = cm/2.54;
    printf("%f",p);
    return 0;
}
