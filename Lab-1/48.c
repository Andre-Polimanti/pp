#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t,s,m,h;

    printf("Digite um tempo em segundos, para ser convertido em horas, minutos e segundos.\n");
    scanf("%f",&t);

    s=t;
    m=t/60;
    h=t/3600;

    printf("%f segundos \n%f minutos \n%f horas",s,m,h);

    return 0;
}
