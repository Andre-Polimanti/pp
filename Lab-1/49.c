#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,m1,s1,h2,m2,s2,d;

    printf("Digite as horas, minutos e segundos de inicio do experimento, apertando a tecla enter entre cada um dos valores.");
    scanf("%d %d %d",&h1,&m1,&s1);

    printf("Digite a duracao, em segundos, do experimento.");
    scanf("%d",&d);

    h2 = ((d/3600+h1));
    m2 = ((d%60+m1));
    s2 = (d%60+s1);

    m2 = m2+s2/60;
    h2 = h2+m2/60;

    h2 = h2%24;
    m2 = m2%60;
    s2 = s2%60;

    printf("%d %d %d",h2,m2,s2);

    return 0;
}