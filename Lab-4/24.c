#include <stdio.h>

int excl(int a);

int main(void)
{
int n;
printf("Digite um numero n para ver um triangulo composto por exclamacoes de altura e lados n e base 2*n-1.\n");
scanf("%d",&n);
excl(n);
}

int excl(int a)
{
int z=0,y=-1;
for(int i=1;i<a;i++){
    y+=2;
    for(int x=z;x<a;x++){
        printf(" ");
    }
    for(int j=1;j<=y;j++){
        printf("!");
    }
    printf("\n");
    z++;
}
return 0;
}