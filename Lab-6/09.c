#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


/*Faça um programa que faca operações simples de números complexos:
-Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
-Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo
de ambos.*/

typedef struct {
    float Imag;
    float Real;
} N_Complexo;

N_Complexo Soma (N_Complexo A, N_Complexo B);
N_Complexo Subtracao (N_Complexo A, N_Complexo B);
N_Complexo Produto (N_Complexo A, N_Complexo B);
float Modulo (N_Complexo N);


void main ()
{
    system("cls");

    printf("Esse programa realiza operacoes basicas com dois numeros complexos e imprime seus resultados, alem dos modulos de cada numero.\n\n");

    N_Complexo Z, W;

    printf("Insira a parte real do numero complexo Z: ");
    scanf("%f", &Z.Real);

    printf("Insira a parte imaginaria do numero complexo Z: ");
    scanf("%f", &Z.Imag);

    printf("\n\n");

    printf("Insira a parte real do numero complexo W: ");
    scanf("%f", &W.Real);

    printf("Insira a parte imaginaria do numero complexo W: ");
    scanf("%f", &W.Imag);

    system("cls");

    N_Complexo Resultante;

    Resultante = Soma(Z, W);

    printf("Soma\n");
    printf("Parte real: %f\n", Resultante.Real);
    printf("Parte imaginaria: %f\n\n", Resultante.Imag);

    Resultante = Subtracao(Z, W);

    printf("Subtracao\n");
    printf("Parte real: %f\n", Resultante.Real);
    printf("Parte imaginaria: %f\n\n", Resultante.Imag);

    Resultante = Produto(Z, W);

    printf("Subtracao\n");
    printf("Parte real: %f\n", Resultante.Real);
    printf("Parte imaginaria: %f\n\n", Resultante.Imag);

    printf("Modulo\n");
    printf("Z: %f\n", Modulo(Z));
    printf("W: %f", Modulo(W));
}

N_Complexo Soma (N_Complexo A, N_Complexo B)
{
    N_Complexo Resultante;

    Resultante.Real = A.Real + B.Real;
    Resultante.Imag = A.Imag + B.Imag;

    return Resultante;
}

N_Complexo Subtracao (N_Complexo A, N_Complexo B)
{
    N_Complexo Resultante;

    Resultante.Real = A.Real - B.Real;
    Resultante.Imag = A.Imag - B.Imag;

    return Resultante;
}

N_Complexo Produto (N_Complexo A, N_Complexo B)
{
    N_Complexo Resultante;

    Resultante.Real = ((A.Real * B.Real) - (A.Imag * B.Imag));
    Resultante.Imag = ((A.Real * B.Imag) - (A.Imag * B.Real));

    return Resultante;
}

float Modulo (N_Complexo N)
{
    float Modulo;
    Modulo = sqrt(pow(N.Real, 2) + pow(N.Imag, 2));
    return Modulo;
}