#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,n,c=0;
    printf("Digite 10 numeros a serem somados.\n");
    while(c<10){
    scanf("%d",&n);
    s=s+n;
    c=c+1;
    }
    printf("A soma eh %d",s);
return 0;
}