#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,p1,p2,p3,n1,n2,n3;
    printf("Digite as tres notas, em ordem, do aluno para descobrir se ele foi aprovado ou reprovado.\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    p1=p2=1;
    p3=2;
    m=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);

    if(m>=60){
        printf("O aluno foi aprovado.");
    }else{
    printf("O aluno foi reprovado.");
    }
    return 0;
}
