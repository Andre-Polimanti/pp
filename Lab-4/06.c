#include <stdio.h>
#include <stdlib.h>

int seg(int h,int m,int s);

int main()
{
    int horas,minutos,segundos;
    printf("Digite horas, minutos e segundos a serem apresentados convertidos em segundos.\n");
    scanf("%d %d %d",&horas,&minutos,&segundos);
    segundos=seg(horas,minutos,segundos);
    printf("\n%d",segundos);

return 0;
}
int seg(int h,int m,int s){
    s=s+(m*60)+(h*3600);
    return s;
}