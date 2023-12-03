#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int cont=0,n;

printf("Quantas vezes dezeja lancar os dados?\n");
scanf("%d",&n);
    
    while (cont<n) {
        int x;

        srand(time(NULL));

        x = (rand()%6)+1;
        printf("\nd1 eh %d\n", x);

        int y;

        y=(rand()%6)+1;
        printf("\nd2 eh %d\n",y);

       if(y>x){
        printf("\nd2 > d1");
        }else if(y<x){
        printf("\nd2 < d1");
        }else{
        printf("\nd2 = d1");
        }  

        cont++;
    }

   
return 0;
}