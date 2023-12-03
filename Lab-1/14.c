#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R,G,PI;
    PI=3.141592 ;
    printf("Insira um angulo em graus a ser convertido em radianos.\n");
    scanf("%f",&G);
    R = G*PI/180;
    printf("%f",R);
    return 0;
}

