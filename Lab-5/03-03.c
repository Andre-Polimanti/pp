#include <stdio.h>

int main()
{
    char string[100];
    int k=0;
    printf("Insira um string para recebe-lo de volta invertido.\n");
    scanf("%s",&string);
    for(int i=0;string[i]!='\0';i++){
        k++;
    }
    for(int i=k;i>=0;i--){
        printf("%c",string[i]);
    }
}