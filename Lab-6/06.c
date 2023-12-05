#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).*/

typedef struct {
    char Matricula[30], Nome[100], Disciplina[30];
    float Nota[2], Media;
} Aluno;

void main ()
{
    system("cls");

    printf("Esse programa le informacoes (notas, disciplina, matricula e nome) de dez alunos e por fim as imprime na tela com suas medias.\n\n");

    Aluno Aluno[10];

    for (int i = 0; i < 10; i++){
        printf("Insira as informacoes do aluno %d.\n", i+1);

        setbuf(stdin,NULL);

        printf("Nome: ");
        fgets(Aluno[i].Nome, 100, stdin);
        Aluno[i].Nome[strlen(Aluno[i].Nome) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("Matricula: ");
        fgets(Aluno[i].Matricula, 30, stdin);
        Aluno[i].Matricula[strlen(Aluno[i].Matricula) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("Codigo da disciplina: ");
        fgets(Aluno[i].Disciplina, 30, stdin);
        Aluno[i].Disciplina[strlen(Aluno[i].Disciplina) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("\n");

        for (int j = 0; j < 2; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &Aluno[i].Nota[j]);
        }

        Aluno[i].Media = (((Aluno[i].Nota[0] * 1) + (Aluno[i].Nota[1] * 2)) / (1 + 2));
        
        printf("\n");
    }

    system("cls");

    printf("Medias:\n");

    for (int i = 0; i < 10; i++){
        printf("Disciplina %s\n", Aluno[i].Disciplina);
        printf("Aluno: %s, Matricula: %s, Media: %f\n", Aluno[i].Nome, Aluno[i].Matricula, Aluno[i].Media);
        printf("\n");
    }
}