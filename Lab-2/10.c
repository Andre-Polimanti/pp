#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura, IMC;

    printf("Digite o sexo de um individuo(H ou M).\n");
    sexo=getchar();

    printf("Digite a altura desse mesmo individuo.\n");
    scanf("%f",&altura);

    switch(sexo){
        case'H':
        IMC = (altura*72.7)-58,0;
        printf("O peso ideal desse individuo eh %f.",IMC); break;

        case'M':
        IMC = (altura*62.1)-44.7;
        printf("O peso ideal desse individuo eh %f.",IMC); break;

        default:
            printf("Caracter invalido, digite M ou H, caracteres diferentes ou minusculos nao serao aceitos.");

    }
return 0;
}
