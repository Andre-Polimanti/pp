#include <stdio.h>
#include <math.h>

int main() 
{
    int soma = 0;

    for(int i=0;i<2000000;i++){
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