#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y;
    printf("Digite um numero positivo a ter a raiz quadrada calculada.\n");
    scanf("%f",&x);
    if(x>0){
        y=sqrt(x);
        printf("A raiz quadrada do numero %f eh %f.",x,y);
    }else{
        printf("O numero %f eh invalido.",x);
    }
return 0;
}

