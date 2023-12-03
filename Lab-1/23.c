#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j,m;
    printf("Insira um comprimento em metros a ser convertido em jardas.\n");
    scanf("%f",&m);
    j= m/0.91;
    printf("%f",j);
    return 0;
}
