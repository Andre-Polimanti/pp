#include <stdio.h>
#include <stdlib.h>

int check(float a,float b);

int main()
{
    float n,n1,n2;
    printf("Digite dois numeros e descubra o maior.\n");
    scanf("%f %f",&n1,&n2);
    n=check(n1,n2);
    if(n==0){
        printf("Ambos sao iguais.");
    }else{
    printf("\nO maior eh %.2f.",n);
    }

return 0;
}
int check(float a,float b){
    if(a<b){
        return b;
    }else if(b<a){
        return a;
    }else{
        return 0;
    }
}