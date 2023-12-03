#include <stdio.h>

int main()
{
int A[50];

for(int i=0;i<50;i++)
{
    A[i]=(i+5*i)%(i+1);
    printf("O vetor de posicao %d tem valor %d.\n",i,A[i]);
}
return 0;
}