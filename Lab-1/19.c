#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,L;
    printf("Insira um valor em litros a ser convertido para metros cubicos.\n");
    scanf("%f",&L);
    m = L /1000;
    printf("%f",m);
    return 0;
}
