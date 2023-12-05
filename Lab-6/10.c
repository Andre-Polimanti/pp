#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.*/

typedef struct {
    char Nome[100];
    char Telefone[10];
    char Endereco[70];
} Individuo;

void main ()
{
    system("cls");

    printf("Esse programa recebe endereco, nome e telefone de cinco individuos e os imprime na tela, com os nomes em ordem alfabetica.\n\n");

    Individuo Pessoa[5];

    for (int i = 0; i < 5; i++){
        printf("Pessoa %d\n", i+1);

        printf("Nome: ");
        fgets(Pessoa[i].Nome, 100, stdin);
        Pessoa[i].Nome[strlen(Pessoa[i].Nome) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("Telefone: ");
        fgets(Pessoa[i].Telefone, 100, stdin);
        Pessoa[i].Telefone[strlen(Pessoa[i].Telefone) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("Endereco: ");
        fgets(Pessoa[i].Endereco, 70, stdin);
        Pessoa[i].Endereco[strlen(Pessoa[i].Endereco) - 1] = '\0';
        setbuf(stdin,NULL);

        printf("\n\n");
    }
    
    for (int i = 0; i < 5; i++){
        if (Pessoa[i].Nome[0] >= 97 && Pessoa[i].Nome[0] <= 122){
            Pessoa[i].Nome[0] -= 32;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            if (strcmp(Pessoa[i].Nome, Pessoa[j].Nome) > 0) {
                Individuo temp = Pessoa[i];
                Pessoa[i] = Pessoa[j];
                Pessoa[j] = temp;
            }
        }
    }

    system("cls");

    for (int i = 0; i < 5; i++){
        printf("Pessoa %d\n", i+1);
        printf("Nome: %s\n", Pessoa[i].Nome);
        printf("Telefone: %s\n", Pessoa[i].Telefone);
        printf("Endereco: %s\n\n", Pessoa[i].Endereco);
    }
}