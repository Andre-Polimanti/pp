#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,z;
    printf("Digite um numero real a ter a raiz quadrada calculada, se positivo, e a elevacao ao quadrado, se negativo.\n");
    scanf("%f",&x);
    if(x>0){
        y=sqrt(x);
        printf("A raiz quadrada do numero %f eh igual a %f.",x,y);
    }else{
        z=x*x;
        printf("O numero %f elevado ao quadrado eh igual a %f.",x,z);
    }

return 0;
}