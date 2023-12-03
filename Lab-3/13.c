#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0;

    for(int cont=1;cont<1000;cont++){
        if((cont%3==0)||(cont%5==0)){
            s=s+cont;
        }
    }
    printf("A soma dos multiplos eh %d",s);
    return 0;
}