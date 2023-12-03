#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Lab2,As3,Ef5,p1,p2,p3,m;
    printf("Digite as tres notas, em ordem, do aluno para descobrir se ele foi aprovado ou reprovado.\n");
    scanf("%f %f %f",&Lab2,&As3,&Ef5);
    p1=2;
    p2=3;
    p3=5;

    if((Lab2<=10)&&(Lab2>=0)&&(As3<=10)&&(As3>=0)&&(Ef5<=10)&&(Ef5>=0)){

        m=(Lab2*p1+As3*p2+Ef5*p3)/(p1+p2+p3);

        if(m<=10&&m>=3){
            printf("O aluno esta aprovado.");
        }else{
            printf("O aluno esta reprovado.");
        }


    }else{
    printf("Pelo menos uma das notas eh invalida.");
    }
    return 0;
}