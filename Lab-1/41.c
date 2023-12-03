#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,v,t;
    printf("Digite  o valor da hora de trabalho (em reais) e o numero de horas trabalhadas no mes, para saber o valor a ser pago ao funcionario.\n");
    scanf("%f %f",&h,&v);
    t=h*v*1.1;
    printf("O valor a ser pago ao funcionario eh %f",t);
    return 0;
}
