#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d,v;
    printf("Insira o numero de dias trabalhados pelo encanador para descobrir a quantia liquida que devera ser paga a ele.\n");
    scanf("%f",&d);
    v=30*d*0.92;
    printf("%f",v);
    return 0;
}
