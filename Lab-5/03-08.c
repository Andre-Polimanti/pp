#include <stdio.h>

int main(){
    char string[100], L1, L2;

    printf("Insira uma string para ter definidos caracteres alterados.\n");
    
    gets(string);

    printf("\nInsira as letras que voce deseja trocar.\n");
    scanf(" %c",&L1);
    scanf(" %c",&L2);
    for (int i = 0; string[i] != '\0'; i++){
        if(string[i]==L1){
            string[i]=L2;
        }else if(string[i]==L2){
            string[i]=L1;
        }
    }
    printf("%s",string);
}  