#include <stdio.h>

int main()
{
int A[10];
printf("Digite dez numeros inteiros para descobrir quais são primos e suas respectivas posicoes no vetor.\n");

for(int i=0;i<10;i++)
{
    scanf("%d",&A[i]);
}
for(int i=0;i<10;i++)
{
    int div=-1;
    for(int j=2;j<A[i];j++)
    {
        if(A[i]%j==0){
            div=j;
        }
    }

    if(A[i]==2||A[i]==3||div==-1)
    {
        printf("O elemento %d eh primo e sua posicao eh %d.\n",A[i],i);
    }

}
return 0;
}