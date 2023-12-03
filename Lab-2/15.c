#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    printf("Digite um numero inteiro entre 1 e 7 para ver o dia da semana que ele representa.\n");
    scanf("%d",&d);

        switch(d){
            case 1:
                printf("Domingo");break;
            case 2:
                printf("Segunda-Feira");break;
            case 3:
                printf("Terca-Feira");break;
            case 4:
                printf("Quarto-Feira");break;
            case 5:
                printf("Quinta-Feira");break;
            case 6:
                printf("Sexta-Feira");break;
            case 7:
                printf("Sabado");break;
            default:
                printf("Numero invalido.");
        }
    return 0;
}