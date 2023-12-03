#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota,falta;

    printf("Digite a nota e as faltas de um aluno para conceitua-lo.\n");
    scanf("%f %f",&nota,&falta);

    if(falta<=20){
       if(nota<4){
            printf("E");
       }else if(nota>=4&&nota<5){
            printf("D");
       }else if(nota>=5&&nota<7.5){
            printf("C");
       }else if(nota>=7.5&&nota<9){
            printf("B");
       }else{
            printf("A");
       }

    }else{
       if(nota<4){
            printf("E");
       }else if(nota>=4&&nota<5){
            printf("E");
       }else if(nota>=5&&nota<7.5){
            printf("D");
       }else if(nota>=7.5&&nota<9){
            printf("C");
       }else{
            printf("B");
       }
    }

return 0;
}
