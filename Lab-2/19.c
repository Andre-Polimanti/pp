#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r5,r3;

    printf("Digite um numero inteiro para ver se ele eh divisivel por 3 ou 5, mas nao ambos .\n");
    scanf("%d",&n);
    r5=n%5;
    r3=n%3;
    if((r5==0)^(r3==0)){
        printf("Verdadeiro");
    }else{
        printf("Falso");
    }
    return 0;
}
