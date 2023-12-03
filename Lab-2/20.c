#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;

    printf("Digite tres valores para descobrir se sao possiveis lados de triangulo, e se sim, de qual tipo.\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<a+b){
        printf("Podem compor triangulo.\n\n");

        }if(a==b&&a==c){
            printf("O triangulo eh equilatero.");

        }else if((a==b&&b!=c)||(a==c&&c!=b)||(c==b&&b!=a)){
            printf("O triangulo eh isoceles.");

        }else{
            printf("O triangulo eh escaleno.");

        }
    return 0;
}
