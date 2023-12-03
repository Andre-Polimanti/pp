#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Por favor, digite tres numeros inteiros para serem somados entre si.\n");
    int x,y,z,i;
    scanf("%d%d%d",&x,&y,&z);
    i=x+y+z;
    printf("%d",i);
    return 0;
}
