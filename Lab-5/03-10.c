#include <stdio.h>
#include <string.h>

void main()
{
    char nome_mercadoria[20];
    float valor_total, desconto, valor_descontado;

    printf("Insira o nome de uma mercadoria e seu valor para descobrir o valor do desconto e o valor descontado.\n");
    printf("Nome: ");
    fgets(nome_mercadoria, 20, stdin);
    printf("Valor: ");
    scanf(" %f", &valor_total);

    nome_mercadoria[strcspn(nome_mercadoria, "\n")] = 0;

    desconto = valor_total * 0.1;
    valor_descontado = valor_total * 0.9;

    printf("\nO nome da mercadoria eh \"%s\".\n", nome_mercadoria);
    printf("O valor total eh \"R$%.2f\".\n", valor_total);
    printf("O valor do desconto eh \"R$%.2f\".\n", desconto);
    printf("O valor a ser pago eh \"R$%.2f\".", valor_descontado);
}