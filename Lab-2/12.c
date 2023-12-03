#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,logitech;
    printf("Digite um numero inteiro positivo para adquirir o logaritmo.\n");
    scanf("%d",&n);
    if(n>0){
        logitech=log10(n);
        printf("O logaritmo eh %d",logitech);
    }else{
    printf("Numero invalido.");
    }
    return 0;
}
