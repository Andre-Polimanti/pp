#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,z;
    printf("Digite um numero positivo para adquirir sua elevacao ao quadrado e sua raiz quadrada.\n");
    scanf("%f",&x);
    if(x>0){
        z=x*x;
        printf("O numero %f elevado ao quadrado eh igual a %f.\n",x,z);
        y=sqrt(x);
        printf("A raiz quadrada do numero %f eh igual a %f.",x,y);
    }else{
        printf("Sei la.");
    }

return 0;
}
