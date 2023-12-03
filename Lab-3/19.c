#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saque,n1,n2,n5,n10,n20,n50,n100;
    printf("Quanto deseja sacar?\n");
    scanf("%d",&saque);
        n100=saque/100;
        saque=saque%100;
        n50=saque/50;
        saque=saque%50;
        n20=saque/20;
        saque=saque%20;
        n10=saque/10;
        saque=saque%10;
        n5=saque/5;
        saque=saque%5;
        n2=saque/2;
        saque=saque%2;
        n1=saque/1;
    printf("\n\n%d nota(s) de 100 \n%d nota(s) de 50 \n%d nota(s) de 20 \n%d nota(s) de 10 \n%d nota(s) de 5 \n%d nota(s) de 2 \n%d nota(s) de 1",n100,n50,n20,n10,n5,n2,n1);
return 0;
}
