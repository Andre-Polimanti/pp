#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,a,b;
    int n;

    printf("Digite dois numeros.\n");
    scanf("%f %f",&a,&b);

    printf("Digite um numero inteiro entre 1 e 4 para selecionar no menu abaixo uma operacao matematica a ser realizada entre os dois numeros.\n");


        printf("\n1 para Soma\n");
        printf("2 para Subtracao\n");
        printf("3 para Multiplicacao\n");
        printf("4 para Divisao\n");

    scanf("%d",&n);

        switch(n){
            case 1:
                r=a+b;
                printf("O resultado da operacao eh %f.",r);break;

            case 2:
                r=a-b;
                printf("O resultado da operacao eh %f.",r);break;

            case 3:
                r=a*b;
                printf("O resultado da operacao eh %f.",r);break;

            case 4:
                r=a/b;
                printf("O resultado da operacao eh %f.",r);break;

            default:
                printf("Numero invalido.");
        }
    return 0;
}
