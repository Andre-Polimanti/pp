#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R,G,PI;
    PI=3.141592;
    printf("Insira um angulo em radianos a ser convertido para graus.\n");
    scanf("%f",&R);
    G = R*180 / PI;
    printf("%f",G);
    return 0;
}
