#include <stdio.h>
#include <stdlib.h>

int check(int a);

int main()
{
    int n;
    printf("Digite um numero inteiro para descobrir se eh positivo, negativo ou igual a zero.\n");
    scanf("%d",&n);
    n=check(n);
    if(n==0){
        printf("O valor eh igual a zero.");
    }else if(n==1){
        printf("O valor eh positivo.");
    }else{
        printf("O valor eh negativo");
    }


return 0;
}
int check(int a){
    if(a==0){
        return 0;
    }else if(a<0){
        return -1;
    }else{
        return 1;
    }

}