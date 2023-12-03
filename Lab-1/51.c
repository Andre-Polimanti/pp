#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,d;
    printf("Insira, respectivamente, as coordenadas x e y de um ponto para descobrir sua distancia da origem.\n");
    scanf("%f %f",&x,&y);
    d=sqrt((x-0)*(x-0)+(y-0)*(y-0));
    printf("%f",d);

    return 0;
}
