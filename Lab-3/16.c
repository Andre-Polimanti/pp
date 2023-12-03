#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int menu;
    float n1,n2,r;
    printf("\n\nEscolha uma operacao a ser realizada dentre as apresentadas no menu, so vai parar quando selecionar saida.\n\n");
    while(menu!=5){
        printf("\nAdicao (Opcao 1)\n");
        printf("Subtracao (Opcao 2)\n");
        printf("Multiplicacao (Opcao 3)\n");
        printf("Divisao (Opcao 4)\n");
        printf("Saida (Opcao 5)\n\n");
    scanf("%d",&menu);
        switch(menu){
            case 1:
            printf("\nDigite os numeros.\n");
            scanf("%f %f",&n1,&n2);
            r=n1+n2;
            printf("O resultado eh %.1f.\n\n",r);break;
            
            case 2:
                printf("\nDigite os numeros.\n");
                scanf("%f %f",&n1,&n2);
                r=n1-n2;
                printf("O resultado eh %.1f.\n\n",r);break;
            
            case 3:
                printf("\nDigite os numeros.\n");
                scanf("%f %f",&n1,&n2);
                r=n1*n2;
                printf("O resultado eh %.1f.\n\n",r);break;
            case 4:
                printf("\nDigite os numeros.\n");
                scanf("%f %f",&n1,&n2);
                r=n1/n2;
                printf("O resultado eh %.1f.\n\n",r);break;
        }
    }

return 0;
}