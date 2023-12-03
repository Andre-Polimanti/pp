#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0;
    float m,s=0;
    printf("Digite 10 numeros a terem a media calculada.\n");
    while(c<10){
    scanf("%d",&n);
    if(n<0){
        continue;
    }
    s=s+n;
    c=c+1;
    }
    m=s/c;
    printf("A media eh %f",m);
return 0;
}
