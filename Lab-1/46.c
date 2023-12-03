#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,x3,x;
    printf("Digite um numero de tres digitos para ser invertido.\n");
    scanf("%d",&x);
    x1=x%10;
    x2=(x/10)%10;
    x3=(x/100)%10;

    printf("%d%d%d",x1,x2,x3);

    return 0;
}
