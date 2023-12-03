#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,cont,s=0;
    printf("Digite um numero para ter os divisores somados.\n");
    scanf("%d",&n);

    for(cont=1;cont<n;cont++){
        if(n%cont==0){
            s=s+cont;
        }
    }
    printf("A soma eh %d.",s);
    return 0;
}
