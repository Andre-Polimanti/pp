#include <stdio.h>
#include <stdlib.h>

int op(float a,float b,char t);

int main()
{
    float n,n1,n2;
    char tipo;
    printf("Digite dois numeros e em seguida a operacao que deseja realizar, usando o simbolo.\n");
    scanf("%f %f %c",&n1,&n2,&tipo);
    n=op(n1,n2,tipo);
    printf("o resultado eh %.2f.",n);
    

return 0;
}
int op(float a,float b,char t){
    if(t=='+'){
            float s=a+b;
            return s;
    }else if(t=='-'){
            float sub=(a-b);
            return sub;
    }else if(t=='*'){
            float mult=(a*b);
            return mult;
    }else{
            float div=(a/b);
            return div;
    }
}