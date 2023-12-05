#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados
do vetor de reprovados.*/

typedef struct {
    char Nome[100], Matricula[30];
    float Media_Final;
} Aluno;

void main ()
{
    system("cls");

    printf("Esse programa recebe nome, media final e matricula de dez estudantes e cria um vetor de estudantes aprovados e outro de reprovados para depois imprimi-los.\n\n");

    Aluno Estudante[10];
    Aluno Estudante_Reprovado[10], Estudante_Aprovado[10];

    for (int i = 0; i < 10; i++){
        printf("Aluno %d\n", i+1);

        printf("Nome: ");
        fgets(Estudante[i].Nome, 100, stdin);
        Estudante[i].Nome[strlen(Estudante[i].Nome) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("Matricula: ");
        fgets(Estudante[i].Matricula, 100, stdin);
        Estudante[i].Matricula[strlen(Estudante[i].Matricula) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("Media Final: ");
        scanf("%f", &Estudante[i].Media_Final);
        setbuf(stdin,NULL);
    }

    int Indice_R = 0;
    int Indice_A = 0;

    for (int i = 0; i < 10; i++){
        if (Estudante[i].Media_Final < 5){
            Estudante_Reprovado[Indice_R] = Estudante[i];
            Indice_R++; 
        }else{
            Estudante_Aprovado[Indice_A] = Estudante[i];
            Indice_A++;
        }
    }

    system("cls");

    printf("Aprovados:\n");
    for(int i = 0; i < Indice_A; i++){
        printf("%s, Matricula: %s - Media Final: %.2f\n", Estudante_Aprovado[i].Nome, Estudante_Aprovado[i].Matricula, Estudante_Aprovado[i].Media_Final);
    }

    printf("Reprovados:\n");
    for(int i = 0; i < Indice_R; i++){
        printf("%s, Matricula: %s - Media Final: %.2f\n", Estudante_Reprovado[i].Nome, Estudante_Reprovado[i].Matricula, Estudante_Reprovado[i].Media_Final);
    }
}