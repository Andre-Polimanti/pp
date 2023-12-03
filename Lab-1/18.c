#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,L;
    printf("Insira um valor em metros a ser convertido em litros.\n");
    scanf("%f",&m);
    L = 1000*m;
    printf("%f",L);
    return 0;
}
