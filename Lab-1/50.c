#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_atual,idade,ano_de_nascimento;
    printf("Insira a idade de uma pessoa e o ano atual, respectivamente, para saber o ano de nascimento.\n");
    scanf("%d %d",&idade,&ano_atual);
    ano_de_nascimento=ano_atual-idade;
    printf("%d",ano_de_nascimento);
    return 0;
}
