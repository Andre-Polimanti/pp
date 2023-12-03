#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,bme,bma,A;
    printf("Digite, em ordem, a altura, a base menor e a maior de um trapezio para descobrir o valor de sua area.\n");
    scanf("%f %f %f",&h,&bme,&bma);

    if((h>0)&&(bma>0)&&(bme>0)){
       A=((bma+bme)*h)/2;
       printf("O valor da area do trapezio eh %f",A);
    }else{
        printf("Pelo mensos um dos valores inseridos eh invalido.");
        }
    return 0;
}
