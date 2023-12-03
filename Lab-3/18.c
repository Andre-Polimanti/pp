#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario=2000,ano=1995,vezes=1;
       while(ano<2023){
        ano++;
        salario=((0.015*vezes)+1)*salario;
        vezes*=2;
       }
    printf("O salario atual eh %.2f",salario);
return 0;
}