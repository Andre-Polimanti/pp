#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n,q,c,r;
    printf("Digite numeros a terem o quadrado, o cubo e a raiz quadrada calculados. Para finalizar digite valor negativo ou zero.\n");
    while(n>0){
    scanf("%f",&n);
        q=n*n;
        c=n*n*n;
        r=sqrt(n);
        printf("\nO quadrado eh %.1f.",q);
        printf("\n\nO cubo eh %.1f.",c);
        printf("\n\nA raiz quadrada eh %.1f.\n\n\n\n",r);
    }
return 0;
}
