#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que converta coordenadas polares para cartesianas:
 Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a)
em radianos;
 Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo
que x = r * cos(a) e y = r * sin(a).
No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do
ponto gerado no plano cartesiano.
*/

typedef struct{
    float R;
    int A;
} Ponto_Polar;

typedef struct{
    float X, Y;
} Ponto_Cartesiano;

void main ()
{
    system("cls");

    Ponto_Polar Ponto;
    Ponto_Cartesiano Ponto_Resultante;

    printf("Esse programa.\n\n");

    printf("Insira um ponto em coordenada polar.\n");
    printf("Raio: ");
    scanf("%f", &Ponto.R);

    printf("Argumwnto: ");
    scanf("%d", &Ponto.A);

    Ponto_Resultante.X = Ponto.R * cos(Ponto.A);
    Ponto_Resultante.Y = Ponto.R * sin(Ponto.A);

    printf("\n\n");

    printf("O ponto no plano cartesiano eh: (%.2f, %.2f)", Ponto_Resultante.X, Ponto_Resultante.Y);
}