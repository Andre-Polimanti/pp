#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura,peso;

    printf("Digite a altura e o peso de uma pessoa para classifica-la.\n");
    scanf("%f %f",&altura,&peso);

    if(altura<1.20){
       if(peso<60){
            printf("A");
       }else if(peso>=60&&peso<=90){
            printf("D");
       }else{
            printf("G");
       }

    }else if(altura>=1.20&&altura<=1.70){
       if(peso<60){
            printf("B");
       }else if(peso>=60&&peso<=90){
            printf("E");
       }else{
            printf("H");
       }

    }else{
       if(peso<60){
            printf("C");
       }else if(peso>=60&&peso<=90){
            printf("F");
       }else{
            printf("I");
       }
    }

return 0;
}