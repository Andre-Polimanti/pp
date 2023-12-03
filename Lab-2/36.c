#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,v;

    printf("Digite o valor da venda realizada pelo vendedor.\n");
    scanf("%f",&v);

    if(v>=100000){
            c=v*0.16+700;
            printf("O valor da comissao eh %f",c);

    }else if(v<100000&&v>=80000){
            c=v*0.14+650;
            printf("O valor da comissao eh %f",c);

    }else if(v<80000&&v>=60000){
            c=v*0.14+600;
            printf("O valor da comissao eh %f",c);

    }else if(v<60000&&v>=40000){
            c=v*0.14+550;
            printf("O valor da comissao eh %f",c);

    }else if(v<40000&&v>=20000){
            c=v*0.14+500;
            1printf("O valor da comissao eh %f",c);

    }else{
            c=v*0.14+400;
            printf("O valor da comissao eh %f",c);

    }



return 0;
}
