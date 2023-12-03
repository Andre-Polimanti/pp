#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b);

int main(void)
{
    int n1,n2;
    printf("Digite dois numeros positivos para terem os numeros contidos no intervalo entre eles somados.\n");
    scanf("%d%d",&n1,&n2);
    soma(n1,n2);
}

int soma(int a,int b){
    int v=0;
    if((a<0)||(b<0)){
        printf("Pelo menos um valor invalido!");
    }else{
    if(a<b){
        a++;
        for(int i=a;i<b;i++){
        v+=i;
        }
        printf("O valor da soma eh %d.",v);
    }else if(a>b){
        b++;
        for(int i=b;i<b;i++){
        v+=1;
        }
        printf("O valor da soma eh %d.",v);
    }else{
        printf("Os numeros sao iguais.");
    }}
return 0;
}