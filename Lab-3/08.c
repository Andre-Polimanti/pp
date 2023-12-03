#include <stdio.h>
#include <stdlib.h>


int main()
{

    int n,cont=0,maior,menor;
    scanf("%d",&n);
    maior=n;
    menor=n;
    while (cont < 9)
    {
        scanf("%d", &n);
        if (n>maior){
            n=maior;
        }if(n<menor){
            n=menor;
        }
        cont=cont+1;
    }
    printf("O maior eh %d\n",maior);
    printf("O menor eh %d",menor);
    return 0;
}