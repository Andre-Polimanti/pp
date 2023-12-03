#include <stdio.h>

int main()
{
int s,A[6]={1,0,5,-2,-5,7};
s=A[0]+A[1]+A[5];
printf("O valor da soma dos vetores A[0], A[1] e A[5] eh: %d.\n",s);
A[4]=100;
printf("\nO valor do vetor A eh:\n");
for(int i=0;i<6;i++)
{
    printf("%d\n",A[i]);
}
return 0;
}