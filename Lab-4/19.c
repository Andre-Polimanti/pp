#include <stdio.h>
#include <stdlib.h>

int fat(int a);

int main(void)
{
    int f,r;
    printf("Digite um numero positivo a ter o fatorial adquirido.\n");
    scanf("%d",&f);
    r=fat(f);
    if(r>0){
    printf("O fatorial de %d eh %d.",f,r);
    }else{
        printf("Valor invalido!");
    }
}

int fat(int a){
    if(a==0){
        return 1;
    
    }else if(a>0){
    int fat=a;
    for(int i=1;i<a;i++){
        fat=fat*i;
    }return fat;

    }else{
        return -1;
    }
}