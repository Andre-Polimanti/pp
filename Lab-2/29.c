#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,i,j,k,z,r1,r2,r3,r4,r5,a1,a2,a3,a4,a5,ac=0;
    a=rand()%100;
    b=rand()%100;
    c=rand()%100;
    d=rand()%100;
    e=rand()%100;
    f=rand()%100;
    i=rand()%100;
    j=rand()%100;
    k=rand()%100;
    z=rand()%100;


    printf("Quanto eh %d + %d?\n",a,b);
    scanf("%d",&r1);
        a1=a+b;

        if(r1==a1){
            printf("\nVoce acertou.\n");
            ac=ac+1;
        }else{
            printf("\nVoce errou\n");}

    printf("Quanto eh %d + %d?\n",c,d);
    scanf("%d",&r2);
        a2=c+d;

        if(r2==a2){
            printf("\nVoce acertou.\n");
            ac=ac+1;
        }else{
            printf("\nVoce errou\n");}

    printf("Quanto eh %d + %d?\n",e,f);
    scanf("%d",&r3);
        a3=e+f;

        if(r3==a3){
            printf("\nVoce acertou.\n");
            ac=ac+1;
        }else{
            printf("\nVoce errou\n");}

    printf("Quanto eh %d + %d?\n",i,j);
    scanf("%d",&r4);
        a4=i+j;

        if(r4==a4){
            printf("\nVoce acertou.\n");
            ac=ac+1;
        }else{
            printf("\nVoce errou\n");}

    printf("Quanto eh %d + %d?\n",k,z);
    scanf("%d",&r5);
        a5=k+z;

        if(r5==a5){
            printf("\nVoce acertou.\n");
            ac=ac+1;
        }else{
            printf("\nVoce errou\n");}


    printf("Voce acertou %d vezes",ac);
return 0;
}