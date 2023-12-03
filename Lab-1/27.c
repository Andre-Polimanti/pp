#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hec,m2;
    printf("Insira um valor em hectar a ser convertido para metros quadrados.\n");
    scanf("%f",&hec);
    m2=hec*10000;
    printf("%f",m2);
    return 0;
}
