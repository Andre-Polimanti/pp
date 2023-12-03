#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod,q;
    float v=0;

    printf("Insira codigo.\n\n");
    scanf("%d",&cod);

    switch(cod){
        case 100:
            printf("Insira quantidade\n\n");
            scanf("%d",&q);
            v=1.2*q;
            printf("Custo eh %f",v);break;
        case 101:
            printf("Insira quantidade\n\n");
            scanf("%d",&q);
            v=1.3*q;
            printf("Custo eh %f",v);break;
        case 102:
            printf("Insira quantidade\n\n");
            scanf("%d",&q);
            v=1.5*q;
            printf("Custo eh %f",v);break;
        case 103:
            printf("Insira quantidade\n\n");
            scanf("%d",&q);
            v=1.2*q;
            printf("Custo eh %f",v);break;
        case 104:
            printf("Insira quantidade\n\n");
            scanf("%d",&q);
            v=1.7*q;
            printf("Custo eh %f",v);break;
        case 105:
            printf("Insira quantidade\n\n");
            scanf("%d",&q);
            v=2.2*q;
            printf("Custo eh %f",v);break;
        case 106:
            printf("Insira quantidade\n\n");
            scanf("%d",&q);
            v=1*q;
            printf("Custo eh %f",v);break;
        default:
            printf("Invalido");
    }

return 0;
}
