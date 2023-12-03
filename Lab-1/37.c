#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,descontado;
    printf("Insira o valor de um produto para descobrir o valor com desconto de doze por cento.\n");
    scanf("%f",&total);
    descontado=total-((total/100)*12);
    printf("%f",descontado);
    return 0;
}
