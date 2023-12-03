#include <stdio.h>
#include <stdlib.h>

int desenha_linha(int a);

int main(void)
{
    int n;
    printf("Quantos sinais de igual deseja que sejam impressos?\n");
    scanf("%d",&n);
    desenha_linha(n);
}

int desenha_linha(int a){
    for(int i=0;i<a;i++){
        printf("=");
    }
return 0;
}