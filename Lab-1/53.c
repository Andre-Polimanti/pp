#include <stdio.h>
#include <stdlib.h>0

int main()
{
    float c,l,p,custo;

    printf("Insira, respectivamente, o comprimento de um terreno, sua largura e o preco da tela que sera usada para cercar esse terreno para entao saber o custo dessa acao.\n");
    scanf("%f %f %f",&c,&l,&p);

    custo=(((2*c)+(2*l))*p);

    printf("O custo de cercar o terreno eh %f.",custo);

    return 0;
}
