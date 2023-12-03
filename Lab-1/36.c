#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi,h,r,V;
    pi=3.141592;
    printf("Insira a altura e o raio de um cilindro circular para adquirir o volume.\n");
    scanf("%f%f",&h,&r);
    V=pi*r*r*h;
    printf("%f",V);
    return 0;
}
