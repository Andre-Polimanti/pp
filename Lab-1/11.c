#include <stdio.h>
#include <stdlib.h>

int main()
{
     float ms,kmh;
     printf("Insira uma velocidade em metros por segundo a ser convertida para quilometros por hora.\n");
     scanf("%f",&ms);
     kmh=ms*3.6;
     printf("%f",kmh);
     return 0;
}
