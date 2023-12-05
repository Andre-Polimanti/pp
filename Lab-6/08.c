#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.*/

typedef struct {
    int Dia, Mes, Ano;
} Nascimento;

typedef struct {
    char Nome[100], Cargo[30], CPF[16];
    char Sexo;
    int Idade;
    int Setor;
    float Salario;
    Nascimento Nascimento;
} Funcionario;

void main ()
{
    system("cls");

    printf("Esse programa le informacoes de um funcionario e as imprime na tela.\n\n");

    Funcionario Funcionario;

    printf("Informacoes do(a) funcionario(a):\n\n");

    printf("Nome: ");
    fgets(Funcionario.Nome, 100, stdin);
    Funcionario.Nome[strlen(Funcionario.Nome) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("CPF: ");
    fgets(Funcionario.CPF, 16, stdin);
    Funcionario.CPF[strlen(Funcionario.CPF) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Sexo (M/F): ");
    Funcionario.Sexo = getchar();
    setbuf(stdin,NULL);

    printf("Idade: ");
    scanf("%d", &Funcionario.Idade);
    setbuf(stdin,NULL);

    printf("Dia de nascimento: ");
    scanf("%d", &Funcionario.Nascimento.Dia);
    setbuf(stdin,NULL);

    printf("Mes de nascimento: ");
    scanf("%d",&Funcionario.Nascimento.Mes);
    setbuf(stdin,NULL);

    printf("Ano de nascimento: ");
    scanf("%d",&Funcionario.Nascimento.Ano);
    setbuf(stdin,NULL);

    printf("Cargo: ");
    fgets(Funcionario.Cargo, 30, stdin);
    Funcionario.Cargo[strlen(Funcionario.Cargo) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Salario: ");
    scanf("%f", &Funcionario.Salario);
    setbuf(stdin,NULL);

    printf("Codigo do Setor: ");
    scanf("%d", &Funcionario.Setor);
    setbuf(stdin,NULL);

    system("cls");

    printf("Nome: %s\n", Funcionario.Nome);
    printf("CPF: %s\n", Funcionario.CPF);
    printf("Sexo: %c\n", Funcionario.Sexo);
    printf("Idade: %d\n", Funcionario.Idade);
    printf("Data de nascimento: %.2d/%.2d/%d\n", Funcionario.Nascimento.Dia, Funcionario.Nascimento.Mes, Funcionario.Nascimento.Ano);
    printf("Cargo: %s\n", Funcionario.Cargo);
    printf("Salario: %.2f\n", Funcionario.Salario);
    printf("Codigo de Setor: %d", Funcionario.Setor);
}