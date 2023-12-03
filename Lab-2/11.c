#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s = 0;
    printf("Digite um numero positivo para ter os algarismos somados entre si.\n");
    scanf("%d",&n);
    if(n>0){
         while(n>0){
            s=s+n%10;
            n/=10;
         }
    printf("A soma dos algarismos eh %d",s);
    }else{
    printf("Numero invalido.");
    }
    return 0;
}
