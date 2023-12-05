#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu.*/

typedef struct{
    int Naipe;
    int Valor
} Carta;

typedef struct{
    Carta Cartas[3];
} Baralho;

void main ()
{
    Baralho Cartas_J[2];
    int check;
    
    srand(time(NULL));

    for (int i = 0; i < 2; i++){
        check = 0;
        while(1){
            for (int j = 0; j < 3, ; j++){
                Cartas_J[i].Cartas[j].Naipe = rand() % 4;
                Cartas_J[i].Cartas[j].Valor = rand() % 13;
            }
            for (int j = 0; j < 3; j++){
                if (((Cartas_J[i].Cartas[0].Naipe == Cartas_J[i].Cartas[1].Naipe) || (Cartas_J[i].Cartas[1].Naipe == Cartas_J[i].Cartas[2].Naipe)) && ((Cartas_J[i].Cartas[0].Valor ==Cartas_J[i].Cartas[1].Valor =) ||))
            }
        if (check == 0){
            break;
        }
        }
    }

}

