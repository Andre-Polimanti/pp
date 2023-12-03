#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v,d,n,p,c1,c2;
    printf("Digite o valor base.\n");
    scanf("%f",&v);
    d=v*0.90;
    p=v/3;
    c1=d*0.05;
    c2=v*0.05;

    printf("O total a pagar com desconto de dez por cento eh %f\n",d);
    printf("O valor de cada parcela, no parcelamento de 3 vezes sem juros %f\n",p);
    printf("A comissao do vendedor, no caso da venda ser a vista %f\n",c1);
    printf("A comissao do vendedor, no caso da venda ser parcelada %f\n",c2);
    
    return 0;
}
