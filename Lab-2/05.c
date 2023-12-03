#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Digite um numero para descobrir se ele eh par ou impar.\n");
    scanf("%d",&x);
    y=x%2;
    if(y == 0){
        printf("O numero digitado eh par.");
    }else{
        printf("O numero digitado eh impar.");
    }

return 0;
}