#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Digite dois numeros para descobrir qual o maior e qual a diferenca entre eles.\n");
    scanf("%d %d",&x,&y);
    if(x>y){
        z=x-y;
        printf("O maior numero eh %d e a diferena entre eles eh %d.",x,z);
    }else if(y>x){
        z=y-x;
        printf("O maior numero eh %d e a diferena entre eles eh %d.",y,z);
    }else{
        printf("Os numeros sao iguais.");
    }
return 0;
}
