#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,h,x;
    printf("Insira os valores dos catetos de um triangulo para adquirir sua hipotenusa.\n");
    scanf("%f %f",&a,&b);
    x=a*a+b*b;
    h=sqrt(x);
    printf("%f",h);
    return 0;
}
