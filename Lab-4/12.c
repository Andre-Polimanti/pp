#include <stdio.h>
#include <stdlib.h>

int soma(int a);

int main()
{
    int n,s;
    printf("Digite um numero natural para adquirir a soma de todos os seus algarismos.\n");
    scanf("%d",&n);
    s=soma(n);
    printf("A soma eh %d.",s);
    

return 0;
}
int soma(int a){
    if(a<0){
            return 0;
    }else if(a>0){
        int soma=0;
            while(a>0){
            soma+=a%10;
            a/=10;
            }
            return soma;
    }
}