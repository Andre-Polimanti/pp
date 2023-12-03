#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,m;
    printf("Digite duas notas validas de um aluno para adiquirir a media.\n");
    scanf("%f %f",&n1,&n2);
    m=(n1+n2)/2;
    if((n1<=10.0)&&(n2<=10.0)&&(0.0<=n1)&&(0.0<=n2)){
        printf("A media das notas eh %f.",m);
    }else{
        printf("Pelo menos uma das notas eh invalida.");
    }
return 0;
}