#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes;

    printf("Digite um dia e mes para ver se eh valido.\n");
    scanf("%d %d",&dia,&mes);

    if(dia>0&&mes>0){
    if(mes>=1&&mes<=12){
        if(mes==2&&dia<=29){
            if(dia==29){
                printf("Se o ano for bissexto eh valido.");
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
