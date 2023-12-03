#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor,fim;
    int estado;

    printf("Digite o valor de um produto e o estado de destino para descobrir o valor final.\n");
    scanf("%f",&valor);

    printf("\n1 para MG.\n");
    printf("2 para SP.\n");
    printf("3 para RJ.\n");
    printf("4 para MS.\n");

    scanf("%d",&estado);

    switch(estado){
        case 1:
            fim=valor*1.07;
            printf("O valor final eh %f",fim);break;
        case 2:
            fim=valor*1.12;
            printf("O valor final eh %f",fim);break;
        case 3:
            fim=valor*1.15;
            printf("O valor final eh %f",fim);break;
        case 4:
            fim=valor*1.08;
            printf("O valor final eh %f",fim);break;
        default:
            printf("Numero invalido.");

    }
return 0;
}