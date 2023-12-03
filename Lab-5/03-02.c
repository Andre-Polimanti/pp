#include <stdio.h>

int main()
{
    char str[100];
    int soma=0;
    printf("Digite um numero para descobrir quantos algarismo 1 ha nele.\n");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='1')
            soma=soma+1;
    }
    printf("%d",soma);
    return 0;
}