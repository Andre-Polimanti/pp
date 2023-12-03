#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ac,m2;
    printf("Insira um valor em acres a ser convertido para metros quadrados.\n");
    scanf("%f",&ac);
    m2=ac*4048.58;
    printf("%f",m2);
    return 0;
}