#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,u,media;
    printf("Insira quatro notas para adquirir a media aritmetica dos valores.\n");
    scanf("%f%f%f%f",&x,&y,&z,&u);
    media=x/4+y/4+z/4+u/4;
    printf("%f",media);
    return 0;
}
