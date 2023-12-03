#include <stdio.h>

int excl(int a);

int main(void)
{
int n;
printf("Digite um numero n para ver um triangulo composto por exclamacoes de base 2*n-1 e n largura.\n");
scanf("%d",&n);
excl(n);
}

int excl(int a)
{
for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        printf("!");
    }
    printf("\n");
}
for(int i=0;i<a;i++){
    for(int j=a-1;j>i;j--){
        printf("!");
    }
    printf("\n");
}
return 0;
}
}