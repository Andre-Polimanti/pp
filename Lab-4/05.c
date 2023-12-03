#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int volume(float a);

int main()
{
    float n;
    printf("Digite o raio de uma esfera para descobrir seu volume.\n");
    scanf("%f",&n);
    n=volume(n);
    printf("\nO volume eh %.2f.",n);

return 0;
}
int volume(float a){
    float v=(pow(a,3)*4/3*3.14);
    return v;
}