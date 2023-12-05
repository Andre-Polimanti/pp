#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação*/

typedef struct {
    char Nome[100];
    float Nota[3];
} Aluno;

void main ()
{
    system("cls");

    printf("Esse programa le o nome e as notas de cinco alunos, informa se foram aprovados e informa aqueles com as menores e maiores medias.\n\n");

    Aluno Aluno[5];
    float Media[5], Soma[5];
    int Maior_Media, Menor_Media;

    for (int i = 0; i < 5; i++){
        Soma[i] = 0;

        printf("\nInsira o nome do Aluno %d: ", i+1);
        fgets(Aluno[i].Nome, 100, stdin);
        Aluno[i].Nome[strlen(Aluno[i].Nome) - 1] = '\0';
        setbuf(stdin,NULL);

        for (int j = 0; j < 3; j++){
            printf("Insira a nota %d: ", j+1);
            scanf("%f", &Aluno[i].Nota[j]);
            Soma[i] += Aluno[i].Nota[j];
        }
        Media[i] = Soma[i] / 3;

        setbuf(stdin,NULL);
    }

    Maior_Media = 0;
    Menor_Media = 0;

    for (int i = 1; i < 5; i++){
        if (Media[Maior_Media] < Media[i]){
            Maior_Media = i;
        }
        else if (Media[Menor_Media] > Media[i]){
            Menor_Media = i;
        }
    }

    system("cls");

    for (int i = 0; i < 5; i++){
        printf("O aluno %s foi ", Aluno[i].Nome);
        if (Media[i] >= 6){
            printf("aprovado.\n");
        }else{
            printf("reprovado.\n");
        }
    }

    printf("\n\n");
    printf("A maior media foi do aluno %s.\n", Aluno[Maior_Media].Nome);
    printf("A menor media foi do aluno %s.\n", Aluno[Menor_Media].Nome);
}