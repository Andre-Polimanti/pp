#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Digite dois numeros e descubra qual deles eh maior.\n");
    scanf("%f %f",&x,&y);
    if(x>y){
        printf("O numero %f eh maior.",x);
    }else if(y>x){
        printf("O numero %f eh maior.",y);
    }else{
        printf("Os numeros sao iguais.");
    }
return 0;
}
