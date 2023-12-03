#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,r;
    printf("Digite o salario-base do funcionário.\n");
    scanf("%f",&s);
    r=s*1.05*0.93;
    printf("O valor a ser recebido pelo funcionario eh %f",r);
    return 0;
}