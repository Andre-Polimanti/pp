#include <stdio.h>
#include <stdlib.h>

float pot(int a,int b);

int main(void)
{
    int x,z;
    float r;
    printf("Digite dois numeros, o primeiro sera elevado ao segundo.\n");
    scanf("%d%d",&x,&z);
    r=pot(x,z);
    printf("O resultado eh %.2f.",r);
}

float pot(int a,int b){
    if(b>0){
    int q=a;
    for(int i=b;i>1;i--){
        q=q*a;
    }
    return q;
    }else if(b==0){
        return 1;
    }else{
    float q=a;
    b*=-1;
    for(int i=b;i>1;i--){
        q=q*a;
    }
    float v=1.0/q;
    return v;
    }
}