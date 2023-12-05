#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
que p. Repita este processo até que seja lido um valor p = 0.*/

typedef struct {
    char Marca[15];
    int Ano;
    float Preco;
} Carro;

void main ()
{
    Carro Modelos[5];
    float P;

    while (1){
        system ("cls");

        printf("Insira um valor, para entao apresentarmos os veiculos com um preco abaixo desse valor, ou insira 0 para parar o loop: ");
        scanf("%f", &P);

        if (P == 0){
            break;
        }

        for (int i = 0; i < 5; i++){
            printf("\n%d veiculo\n", i+1);

            printf("Marca: ");
            setbuf(stdin,NULL);
            fgets(Modelos[i].Marca, 15, stdin);
            setbuf(stdin,NULL);

            printf("Ano: ");
            scanf("%d", &Modelos[i].Ano);

            printf("Preco: ");
            scanf("%f", &Modelos[i].Preco);
        }

        system("cls");

        int Num = 0;

        for (int i = 0; i < 5; i++){
            if (Modelos[i].Preco < P){
                Num++;

                printf("%d Carro\n", Num);
                printf("Marca: %s", Modelos[i].Marca);

                printf("Ano: %d\n", Modelos[i].Ano);

                printf("Preco: %.2f\n", Modelos[i].Preco);

                printf("\n");
            }
        }
        
        setbuf(stdin,NULL);
        printf("\n\nAperte \"enter\" para seguir para o proximo loop.");
        getchar();

    }
}