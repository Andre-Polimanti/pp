#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char matriz_modelos[5][15];
    int consumo[5], mil[5], economico = 0;

    printf("\nInsira cinco modelod de carros, seguidos pelos seus respectivos consumos.\n");

    for (int i = 0; i < 5; i++){
        printf("\n%d modelo: ", i+1);
        setbuf(stdin, NULL);
        fgets(matriz_modelos[i], 15, stdin);
        printf("\nQuilometros por litro: ");
        scanf(" %d", &consumo[i]);

        matriz_modelos[i][strcspn(matriz_modelos[i], "\n")] = 0;
    }

    for (int i = 1; i < 5; i++){
        if (consumo[i] > consumo[economico]){
            economico = i;
        }
    }
    printf("\n\nO modelo mais economico eh o(a) %s.", matriz_modelos[economico]);

    for (int i = 0; i < 5; i++){
        mil[i] = 1000/consumo[i];
        printf("\n%s consome %d litros para percorrer mil quilometros.", matriz_modelos[i], mil[i]);
    }
}