#include <stdio.h>
#include <stdlib.h>

void data(int dia,int mes,int ano);

int main()
{
    int d,m,a;

    scanf("%d",&d);
    scanf("%d",&m);
    scanf("%d",&a);

    data(d,m,a);
}

void data(int dia,int mes,int ano){

    printf("%d de ",dia);
    switch(mes){
        case 1:
            printf("janeiro de ");break;
        case 2:
            printf("fevereiro de ");break;
        case 3:
            printf("março de ");break;
        case 4:
            printf("abril de ");break;
        case 5:
            printf("maio de ");break;
        case 6:
            printf("junho de ");break;
        case 7:
            printf("julho de ");break;
        case 8:
            printf("agosto de ");break;
        case 9:
            printf("setembro de ");break;
        case 10:
            printf("outubro de ");break;
        case 11:
            printf("novembro de ");break;
        case 12:
            printf("dezembro de ");break;
    }
    printf("%d",ano);

}
