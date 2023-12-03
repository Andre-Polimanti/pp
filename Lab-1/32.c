#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,soma;
    printf("Insira um numero inteiro para adquirir a soma do sucessor de seu triplo com o antecessor de seu dobro.\n");
    scanf("%d",&x);
    y=x*3+1;
    z=x*2-1;
    soma=y+z;
    printf("%d",soma);
    return 0;
}
