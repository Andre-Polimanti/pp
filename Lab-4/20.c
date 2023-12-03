#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check(int a);

int main(void)
{
int n,r;
scanf("%d",&n);
r=check(n);
printf("%d",r);
}

int check(int a){
    int div,q=0,b;
    
        for(int i=2;i<a;i++){
        div=-1;
        for(b=2;b<i;b++){
        if(i%b==0){
            div=1;
        
    }}if(div==-1){
        q=q+1;}
    }
    
   
return q;
}