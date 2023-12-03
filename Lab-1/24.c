#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ac,m2;
    printf("Insira um valor em metros quadrados a ser convertido para acres.\n");
    scanf("%f",&m2);
    ac=m2*0.000247;
    printf("%f",ac);
    return 0;
}
