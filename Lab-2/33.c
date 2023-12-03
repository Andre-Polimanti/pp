#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pa,pn;

    printf("Insira o preco antigo para receber o novo e uma mensagem.");
    scanf("%f",&pa);

    if(pa<50){
        pn=pa*1.05;
        if(pn<80){
            printf("Barato");
        }else if(pn>=80&&pn<=120){
            printf("Normal");
        }else if(pn>120&&pn<=200){
            printf("Caro");
        }else{
            printf("Muito caro");
        }

    }else if(pa>=50&&pa<=100){
        pn=pa*1.1;
         if(pn<80){
            printf("Barato");
        }else if(pn>=80&&pn<=120){
            printf("Normal");
        }else if(pn>120&&pn<=200){
            printf("Caro");
        }else{
            printf("Muito caro");
        }

    }else{
        pn=pa*1.15;
         if(pn<80){
            printf("Barato");
        }else if(pn>=80&&pn<=120){
            printf("Normal");
        }else if(pn>120&&pn<=200){
            printf("Caro");
        }else{
            printf("Muito caro");
        }

    }

return 0;
}
