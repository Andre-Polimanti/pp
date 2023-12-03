#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,raiz1,raiz2;

    printf("Digite as variaveis a,b e c de uma equacao do segundo grau, para adquirir suas raizes.\n");
    scanf("%f %f %f",&a,&b,&c);

    delta=(b*b-(4*(a*c)));
    raiz1=(-b+delta)/(2*a);
    raiz2=(-b-delta)/(2*a);


    if(delta<0){
       printf("Nao existe raiz.");

    }else if(delta==0){
        printf("Raiz unica.");

    }else{
        printf("As raizes sao %f e %f.",raiz1,raiz2);

    }
return 0;
}
