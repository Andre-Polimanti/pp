#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Hip(float a,float b);

int main()
{
    float ca,cb;
    printf("Digite dois catetos para adquirir uma hipotenusa.\n");
    scanf("%f %f",&ca,&cb);
    float h=Hip(ca,cb);
    printf("\nA hipotenusa eh %.2f.",h);

return 0;
}
int Hip(float a,float b){
    int H=sqrt(pow(a,2)+pow(b,2));
    return H;
}