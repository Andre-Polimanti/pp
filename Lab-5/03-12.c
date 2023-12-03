#include <stdio.h>
#include <string.h>

void main()
{
    char S[100];
    int cont;

    printf("Insira uma string a ser codificada.\n");
    fgets(S, 100, stdin);

    cont = strlen(S);


    for (int x = 0; x < (cont - 1); x++){
        S[x] = S[x] + 3;
    }

    printf("%s", S);
}