#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0,i,x=0;
    while(c<100){
        c=c+1;
        printf("%d\n",c);
    }for(i=1;i<=100;i++){
        printf("%d\n",i);
    }
    do{
        x=x+1;
        printf("%d\n",x);
    }while(x<100);
return 0;
}
