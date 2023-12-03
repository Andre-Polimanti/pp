#include <stdio.h>
#include <stdlib.h>

int main()
{
    float escada,degrau,subir;
    printf("Digite, respectivamente, a altura que o usuario deseja alcancar na escada e a altura de cada degrau para descobrir quantos degraus ele vai precisar subir.\n");
    scanf("%f %f",&escada,&degrau);
    subir=escada/degrau;;
    printf("O usuario devera subir %f degraus",subir);
    return 0;
}