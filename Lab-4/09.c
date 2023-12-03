#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int volume(float a,float b);

int main()
{
    float h,r,v;
    printf("Digite a altura e o raio de um cilindro para descobrir seu volume.\n");
    scanf("%f %f",&h,&r);
    v=volume(h,r);
    printf("\nO volume eh %.2f.",v);

return 0;
}
int volume(float a,float b){
    float v=(pow(b,2)*a*3.141592);
    return v;
}