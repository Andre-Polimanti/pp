#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p,g1,g2,g3,a1,a2,a3,a;
    printf("Insira os valores apostados por cada um dos amigos para saber quanto cada um receberia caso ganhassem na loteria.\n");
    scanf("%f %f %f",&a1,&a2,&a3);
    a=a1+a2+a3;
    printf("Agora, insira o valor do premio.\n");
    scanf("%f",&p);
    g1=p*(a1/a);
    g2=p*(a2/a);
    g3=p*(a3/a);

    printf("Os amigos, caso vencedores, na ordem de quem teve o valor apostado inserido no programa primeiro, receberiam os seguintes valores:\n%f\n%f\n%f",g1,g2,g3);

    return 0;
}
