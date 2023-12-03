#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,x3,x4,x;
    printf("Insira um numero inteiro de quatro digitos para receber um digito por linha.\n");
    scanf("%d",&x);
    x1=x%10;
    x2=(x/10)%10;
    x3=(x/100)%10;
    x4=(x/1000)%10;

    printf("%d\n%d\n%d\n%d",x4,x3,x2,x1);

    return 0;
}
