#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r,p1,p2,p3;
    int n,x,y,z,a,b;

    printf("Digite tres numeros inteiros positivos.\n");
    scanf("%d %d %d",&x,&y,&z);

    if(x>0&&y>0&&z>0){

        printf("Digite um numero inteiro entre 1 e 4 para selecionar no menu abaixo uma classe de media a adquirir.\n");


        printf("\n1 para Geometrica.\n");
        printf("2 para Poderada.\n");
        printf("3 para Harmonica.\n");
        printf("4 para Aritmetica.\n");



    scanf("%d",&n);

        switch(n){
            case 1:
                a=x*y*z;

                r=(cbrt(a));
                printf("\nO resultado da operacao eh %f.",r);break;

            case 2:
                printf("\nDigite os pesos.\n");
                scanf("%f %f %f",&p1,&p2,&p3);

                r=((x*p1)+(y*p2)+(z*p3))/(p1+p3+p2);
                printf("\nO resultado da operacao eh %f.",r);break;

            case 3:
                r=1/((1/x)+(1/y)+(1/z));
                printf("O resultado da operacao eh %f.",r);break;

            case 4:
                r=(x+y+z)/3;
                printf("O resultado da operacao eh %f.",r);break;

            default:
                printf("Numero invalido.");
        }

    }else{
        printf("\nPelo menos um numero invalido!");

}
return 0;
}
