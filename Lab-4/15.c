#include <stdio.h>
#include <stdlib.h>

int check(float a,float b,float c);
int tipo(float a,float b,float c);

int main()
{
    float a,b,c,ch,t;
    printf("Digite tres valores para descobrir se configuram lados de um triangulo e, se sim, qual tipo.\n");
    scanf("%f %f%f",&a,&b,&c);
    ch=check(a,b,c);
    t=tipo(a,b,c);
    if(a<0||b<0||c<0){
        printf("Pelo menos um valor invalido.");
    }else{
    if(ch==1){
        printf("Eh triangulo de tipo ");
    if(t==1){
        printf("equilatero.");
    }else if(t==0){
        printf("isoceles.");
    }else{
        printf("escaleno.");
    }
    }else{
        printf("Nao eh triangulo.");
    }
    }
return 0;
}
int check(float a,float b,float c){
    if((a<(b+c))&&(b<(c+a))&&(c<(b+a))){
            return 1;
    }else{
            return 0;
    }
}

int tipo(float a,float b,float c){
        if((a==b)&&(b==c)){
            return 1;
        }else if( ((a==b)&&(b!=c)) || ((a==c)&&(c!=b)) || ((c==b)&&(b!=a)) ){
            return 0;
        }else{
            return -1;
        }
}