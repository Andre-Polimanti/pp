#include <stdio.h>
#include <string.h>

void main()
{
    char S[100];
    int x, check;

    printf("\nInsira uma string para saber se eh palindromo.\n");
    fgets(S, 100, stdin);

    for (x = 0; S[x] != '\0'; x++){
    }
    x-=2;

    for (int i = 0, j = x; i < x; i++, j--){
        if (S[i] != S[j]){
            check = 0;
        }else{
            check = 1;
        }
    }
    if (check == 1){
        printf("\nEh palindromo.\n");
    }else{
        printf("\nNao eh palindromo.\n");
    }
}