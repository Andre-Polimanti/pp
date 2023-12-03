#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano,r4,r400,r100;

    printf("Digite um ano para ver se eh bissexto..\n");
    scanf("%d",&ano);
    r4=ano%4;
    r400=ano%400;
    r100=ano%100;
            if((r4==0)||(r400==0^r100==0)){
                printf("Eh ano bissexto.");
            }else{
                printf("Nao eh ano bissexto.");
            }

return 0;
}
