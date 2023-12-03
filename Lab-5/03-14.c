#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100];
    int x, y, n, i, j;

    printf("\nInsira duas strings e um numero nao negativo para concatenar x digitos da segunda string a primeira.\n");

    printf("Primeira string: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);

    printf("Segunda string: ");
    setbuf(stdin, NULL);
    fgets(str2, 100, stdin);

    for (x = 0; str2[x] != '\0'; x++){
    }
    x -= 1;

    printf("\nDigite um numero nao negativo e menor ou igual a %d: ", x);
    setbuf(stdin, NULL);
    scanf("%d", &n);

    if (n > x){
        printf("Valor invalido!");
    }else if (n == 0){
        for (y = 0; (str1[y] != '\n'); y++){
        }
        str1[y] = '\0';
        printf("Voce escolheu nao passar nenhum caracter na segunda string para a primeira, logo seu retorno eh \"%s\". \n\n", str1);
    }else{
        n += 1;

        for (y = 0; (str1[y] != '\n'); y++){
        }
        for (i = y, j = 0; j <= n; i++, j++){
            str1[i] = str2[j];
        }
        for (y = 0; (str1[y] != '\n'); y++){
        }
        str1[y] = '\0';

        printf("Voce escolheu passar o(s) primeiro(s) %d caracter(es) da segunda string para a primeira, logo seu retorno eh \"%s\". \n\n", n-1, str1);
    }
}