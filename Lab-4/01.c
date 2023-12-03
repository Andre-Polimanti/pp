#include <stdio.h>
#include <stdlib.h>

int dobro(int a);

int main()
{
    int x,r;
    scanf("%d",&x);
    r=dobro(x);
    printf("%d",r);
return 0;
}

int dobro(int a){
    return 2*a;
}