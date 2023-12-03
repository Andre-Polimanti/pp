#include <stdio.h>

int excl(int a);

int main(void)
{
int n;
printf("Quantas linhas com pontos de exclamacao crescentes em quantidade deseja ver?\n");
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
return 0;
}