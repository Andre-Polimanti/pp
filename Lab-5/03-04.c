#include <stdio.h>

int main()
{
    char str[100];
    int soma=0;
    printf("Descubra quantas vogais existem na string que inserir.\n");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        if((str[i]==65)||(str[i]==69)||(str[i]==73)||(str[i]==79)||(str[i]==85)||(str[i]==97)||(str[i]==101)||(str[i]==105)||(str[i]==111)||(str[i]==117)){
            soma=soma+1;
        }
    }
    printf("%d",soma);
    return 0;
}