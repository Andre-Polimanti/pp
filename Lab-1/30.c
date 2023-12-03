#include <stdio.h>
#include <stdlib.h>

int main()
{
    float USD,REAL,cotacao;
    printf("Insira um valor em real, em seguida a cotacao do dolar, para entao adquirir o valor em dolar desse dinheiro.\n");
    scanf("%f %f",&REAL,&cotacao);
    USD=REAL/cotacao;
    printf("%f",USD);
    return 0;
}

