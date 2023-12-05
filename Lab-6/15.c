#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.*/

typedef struct {
    char Titulo[30];
    char Autor[15];
    int Ano;
} Livro;

void main ()
{
    system("cls");

    Livro Livros[5];
    char Procura[30];

    printf("Insira os 5 livros de um acervo, para depois procurar por um titulo entre eles.\n\n");

    for (int i = 0; i < 5; i++){
        printf("%d Livro\n", i+1);

        setbuf(stdin,NULL);
        printf("Titulo: ");
        fgets(Livros[i].Titulo, 30, stdin);
        Livros[i].Titulo[strlen(Livros[i].Titulo) - 1] = '\0';

        setbuf(stdin,NULL);
        printf("Autor: ");
        fgets(Livros[i].Autor, 15, stdin);
        Livros[i].Autor[strlen(Livros[i].Autor) - 1] = '\0';

        setbuf(stdin,NULL);
        printf("Ano: ");
        scanf("%d", &Livros[i].Ano);

        printf("\n");
    }

    setbuf(stdin,NULL);
    printf("Insira o titulo que procura: ");
    fgets(Procura, 30, stdin);
    Procura[strlen(Procura) - 1] = '\0';

    system("cls");

    int Check = 0;

    for (int i = 0; i < 5; i++){
        if (!strcmp(Procura, Livros[i].Titulo)){
            Check++;
        }
    }

    if (Check != 0){
        printf("Livros encontrados:\n");
        for (int i = 0; i < 5; i++){
            if (!strcmp(Procura, Livros[i].Titulo)){
            printf("Titulo: %s, Autor: %s, Ano: %d\n", Livros[i].Titulo, Livros[i].Autor, Livros[i].Ano);
        }
        }
    }else{
        printf("Nenhum livro encontrado!");
    }
}