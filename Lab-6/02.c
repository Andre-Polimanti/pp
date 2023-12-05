#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.*/

typedef struct {
    char Logradouro[100];
    int Numero;
} Endereco;

typedef struct {
    char Nome[100];
    int Idade;
    Endereco Endereco;
} Individuo;

void main ()
{
    system("cls");
    Individuo Pessoa;

    printf("Esse programa armazena em uma struct o endereco, idade e nome de um individuo, para entao imprimir essas informacoes na tela.\n");

    printf("\n\nInsira o nome do individuo: ");
    fgets(Pessoa.Nome, 100, stdin);
    Pessoa.Nome[strlen(Pessoa.Nome) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Insira a idade de %s: ", Pessoa.Nome);
    scanf("%d", &Pessoa.Idade);

    setbuf(stdin,NULL);

    printf("Insira a rua/avenida de moradia de %s: ", Pessoa.Nome);
    fgets(Pessoa.Endereco.Logradouro, 100, stdin);
    Pessoa.Endereco.Logradouro[strlen(Pessoa.Endereco.Logradouro) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Insira o o numero da residencia de %s: ", Pessoa.Nome);
    scanf("%d", &Pessoa.Endereco.Numero);

    system("cls");

    printf("O nome do individuo eh: %s", Pessoa.Nome);
    printf("\nA idade do individuo eh: %d", Pessoa.Idade);
    printf("\nO endereco do individuo eh: %s, %d", Pessoa.Endereco.Logradouro, Pessoa.Endereco.Numero);
}