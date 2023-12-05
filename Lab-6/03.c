#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.*/

typedef struct {
    char Nome[100];
    int Matricula;
    char Curso[100];
} Aluno;

void main ()
{
    system("cls");

    printf("Esse programa armazena informacoes de 5 alunos em um vetor de uma struct para depois imprimi-las.\n\n\n");

    Aluno Alunos[5];

    for (int i = 0; i < 5; i++){
        printf("Insira as informacoes do aluno %d.\n", i+1);

        printf("Nome: ");
        fgets(Alunos[i].Nome, 100, stdin);
        Alunos[i].Nome[strlen(Alunos[i].Nome)-1] = '\0';
        setbuf(stdin,NULL);

        printf("Numero de matricula: ");
        scanf("%d", &Alunos[i].Matricula);
        setbuf(stdin,NULL);

        printf("Curso: ");
        fgets(Alunos[i].Curso, 100, stdin);
        Alunos[i].Curso[strlen(Alunos[i].Curso)-1] = '\0';
        setbuf(stdin,NULL);

        printf("\n");
    }
    
    system("cls");

    for (int i = 0; i < 5; i++){
        printf("Aluno %d\n", i+1);
        printf("Nome: %s\n", Alunos[i].Nome);
        printf("Numero de matricula: %d\n", Alunos[i].Matricula);
        printf("Curso: %s\n\n\n", Alunos[i].Curso);
    }
}