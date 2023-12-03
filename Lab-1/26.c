#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hec,m2;
    printf("Insira um valor em metros quadrados a ser convertido pra hectar.\n");
    scanf("%f",&m2);
    hec= m2*0.0001;
    printf("%f",hec);
    return 0;
}
