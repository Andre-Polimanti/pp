#include <stdio.h>
#include <stdlib.h>

int media(float a,float b,float c,char t);

int main()
{
    float n,n1,n2,n3;
    char tipo;
    printf("Digite tres notas e o tipo de media que voce deseja adquirir.\n");
    scanf("%f %f %f %c",&n1,&n2,&n3,&tipo);
    n=media(n1,n2,n3,tipo);
    printf("A media eh %.2f.",n);
    

return 0;
}
int media(float a,float b,float c,char t){
    if(t=='A'){
            float ma=(a+b+c)/3;
            return ma;
    }else if(t=='P'){
            float mp=((a*5)+(b*3)+(c*2))/10;
            return mp;
    }
}