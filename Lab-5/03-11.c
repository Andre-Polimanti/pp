#include <stdio.h>
#include <string.h>

void main()
{
    char S[20];
    int i, j, x;

    printf("Insira uma string, seguida por dois numeros nao negativos e receba o segmento dessa string delimitado pelos numeros inseridos.\n");
    fgets(S, 20, stdin);

    for (x = 0; S[x] != '\0'; x++){
    }
    int cont = x - 1;

    printf("Insira dois numeros nao negativos menores ou iguais a %d.\n", cont);
    scanf("%d", &i);
    scanf("%d", &j);

    if ((i > -1) && (j > -1) && (i < j) && (i <= cont) && (j <= cont)){
        printf("Segmento da string delimitado pelos numeros inseridos: ");
        for (int k = i; k <= j; k++){
            printf("%c", S[k]);
        }
    }else if ((i > -1) && (j > -1) && (i > j) && (i <= cont) && (j <= cont)){
        printf("Segmento da string delimitado pelos numeros inseridos: ");
        for (int k = j; k <= i; k++){
            printf("%c", S[k]);
        }
    }else{
        printf("Pelo menos um valor imvalido.");
    }
}