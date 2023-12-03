#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Insira um numero inteiro para adquirir o seu antecessor e sucessor, respectivamente.\n");
    scanf("%d",&x);
    y= x - 1;
    z= x + 1;
    printf("%d %d",y,z);
    return 0;
}
