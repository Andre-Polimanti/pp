#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,s;
    printf("Insira três valores para adquirir a soma dos seus quadrados.\n");
    scanf("%f%f%f",&x,&y,&z);
    s=x*x+y*y+z*z;
    printf("%f",s);
    return 0;
}
