#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano,dia,mes,r4,r400,r100;

    printf("Digite o dia, mes e ano de nascimento de um individuo para ver se eh data valida.\n");
    scanf("%d %d %d",&dia,&mes,&ano);
    r4=ano%4;
    r400=ano%400;
    r100=ano%100;

    if(dia>0&&mes>0){
    if(mes>=1&&mes<=12){
        if(mes==2&&dia<=29){
            if((r4==0)||(r400==0^r100==0)){
                printf("Eh ano bissexto e eh data valida.");
            }else{
                printf("Eh valido");
            }

        }else if((mes==1||mes==3||mes==5||mes==7||mes==8||mes==10)&&dia<=31){
            printf("Eh valido");
            }else{
                printf("Eh invalido");
            }
        }else if(dia<=30){
            printf("Eh valido");
        }

    }else{
        printf("Numero invalido");
    }


return 0;
}
