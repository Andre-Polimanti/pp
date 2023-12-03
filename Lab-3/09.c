#include <stdio.h>
#include <stdlib.h>


int main()
{

    int n,imp,cont=0;
    scanf("%d",&n);
    while (cont<n)
    {
        cont=cont+1;
        imp=((2*cont)-1);
        printf("%d\n",imp);
    }
    return 0;
}
