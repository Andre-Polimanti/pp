#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,emprestimo,check;
    printf("Digite , respectivamente, o salario de um funcionario e a prestacao de um emprestimo para checar se esse emprestimo eh valido para esse funcionario.\n");
    scanf("%f %f",&salario,&emprestimo);
    check=salario/10*2;
    if(emprestimo>check){
        printf("Emprestimo nao concedido.");
    }else{
        printf("Emprestimo concedido.");
    }
return 0;
}