#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j,m;
    printf("Insira um comprimento em jardas a ser convertido para metros.\n");
    scanf("%f",&j);
    m = 0.91*j;
    printf("%f",m);
    return 0;
}