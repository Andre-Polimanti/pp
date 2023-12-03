#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,bonus,tempo,rea;
    printf("Qual o salario do funcionario e quanto tempo ele trabalhou?\n\n");
    scanf("%f %f",&salario,&tempo);
        if(salario<=500){
            if(tempo<1){
            bonus=0;
            rea=salario*1.25+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=1&&tempo<=3){
            bonus=100;
            rea=salario*1.25+bonus;
            printf("O novo salario eh %f.",rea);
            }else if(tempo>=4&&tempo<=6){
            bonus=200;
            rea=salario*1.25+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=7&&tempo<=10){
            bonus=300;
            rea=salario*1.25+bonus;
            printf("O novo salario eh %f",rea);
            }else{
            bonus=500;
            rea=salario*1.25+bonus;
            printf("O novo salario eh %f.",rea);
            }
        }else if(salario<=1000){
            if(tempo<1){
            bonus=0;
            rea=salario*1.20+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=1&&tempo<=3){
            bonus=100;
            rea=salario*1.20+bonus;
            printf("O novo salario eh %f.",rea);
            }else if(tempo>=4&&tempo<=6){
            bonus=200;
            rea=salario*1.20+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=7&&tempo<=10){
            bonus=300;
            rea=salario*1.20+bonus;
            printf("O novo salario eh %f",rea);
            }else{
            bonus=500;
            rea=salario*1.20+bonus;
            printf("O novo salario eh %f.",rea);
            }
        }else if(salario<=1500){
            if(tempo<1){
            bonus=0;
            rea=salario*1.15+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=1&&tempo<=3){
            bonus=100;
            rea=salario*1.15+bonus;
            printf("O novo salario eh %f.",rea);
            }else if(tempo>=4&&tempo<=6){
            bonus=200;
            rea=salario*1.15+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=7&&tempo<=10){
            bonus=300;
            rea=salario*1.15+bonus;
            printf("O novo salario eh %f",rea);
            }else{
            bonus=500;
            rea=salario*1.15+bonus;
            printf("O novo salario eh %f.",rea);
            }
        }else if(salario<=2000){
            if(tempo<1){
            bonus=0;
            rea=salario*1.1+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=1&&tempo<=3){
            bonus=100;
            rea=salario*1.1+bonus;
            printf("O novo salario eh %f.",rea);
            }else if(tempo>=4&&tempo<=6){
            bonus=200;
            rea=salario*1.1+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=7&&tempo<=10){
            bonus=300;
            rea=salario*1.1+bonus;
            printf("O novo salario eh %f",rea);
            }else{
            bonus=500;
            rea=salario*1.1+bonus;
            printf("O novo salario eh %f.",rea);
            }
        }else{
        if(tempo<1){
            bonus=0;
            rea=salario+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=1&&tempo<=3){
            bonus=100;
            rea=salario+bonus;
            printf("O novo salario eh %f.",rea);
            }else if(tempo>=4&&tempo<=6){
            bonus=200;
            rea=salario+bonus;
            printf("O novo salario eh %f",rea);
            }else if(tempo>=7&&tempo<=10){
            bonus=300;
            rea=salario+bonus;
            printf("O novo salario eh %f",rea);
            }else{
            bonus=500;
            rea=salario+bonus;
            printf("O novo salario eh %f.",rea);
            }
        }

return 0;
}