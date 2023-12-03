#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    float h1=1.50,h2=1.49;

    while(h1>=h2){
        a++;
        h1+=0.02;
        h2+=0.03;
    }
printf("Em %d anos Ze ficara maior que Chico.",a);
return 0;
}
