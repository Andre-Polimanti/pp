#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,p;
    printf("Insira o custo de fabrica.\n\n");
    scanf("%f",&c);

    if(c<12000){
        p=c*1.05;
        printf("O preco final eh %f",p);
    }else if(c>=12000&&c<=25000){
        p=c*1.15*1.10;
        printf("O preco final eh %f",p);
    }else{
        p=c*1.15*1.20;
        printf("O preco final eh %f",p);
    }
return 0;
}
