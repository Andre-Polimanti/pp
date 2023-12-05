#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Considerando a estrutura
struct vetor {
float a;
float b;
float c;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.*/

typedef struct vetor {
float a;
float b;
float c;
} Vetor;

void main ()
{
    system("cls");

    printf("Esse programa usa de uma struct vetor para realizar a soma de dois vetores R3 e imprimir o vetor resultante.\n\n");

    Vetor V[2], V_Resultante;

    for (int i = 0; i < 2; i++){
        printf("Insira as coordenadas do Vetor %d.\n", i+1);

        printf("X: ");
        scanf("%f", &V[i].a);

        printf("Y: ");
        scanf("%f", &V[i].b);

        printf("Z: ");
        scanf("%f", &V[i].c);

        printf("\n");
    }


    V_Resultante.a = V[0].a + V[1].a;
    V_Resultante.b = V[0].b + V[1].b;
    V_Resultante.c = V[0].c + V[1].c;

    printf("\n\n");

    printf("O Vetor Resultante eh: (%.2f, %.2f, %.2f)", V_Resultante.a, V_Resultante.b, V_Resultante.c);
}