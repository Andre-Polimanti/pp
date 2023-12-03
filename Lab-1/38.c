#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_base, salario_aumentado;
    printf("Insira o salario de um funcionario para descobrir o salario do mesmo com um aumento de vinte e cinco por cento.\n");
    scanf("%f",&salario_base);
    salario_aumentado = salario_base*1.25;
    printf("%f",salario_aumentado);
    return 0;
}
