#include <stdio.h>
#include <math.h>

int main() 
{
    int a,b, soma = 0;

    printf("Digite dois numeros para adquirir a soma de numeros primos entre eles.\n");
    scanf("%d %d",&a,&b);

    for(int i=a+1;i<b;i++){
        int ver = 0;

        for(int j = 2; j <= (int) sqrt(i); j++) {
            if ((i%j) == 0) ver = 1;
        }

        if (i == 1) ver = 1;

        if (ver == 0) soma += i;
    }

    printf("%d", soma);

    return 0;
}