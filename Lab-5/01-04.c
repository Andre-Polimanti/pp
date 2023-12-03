#include <stdio.h>

int main()
{
int A[5],maior=0,menor=0;

printf("Insira 5 valores e, em seguida, receba as posicoes onde se encontram o maior e o menor valor.\n");

for(int i=0;i<5;i++)
{
    scanf("%d",&A[i]);
}
for(int i=0;i<5;i++){
    if(A[i]>A[maior]){
        maior=i;
    }
    if(A[i]<A[menor]){
        menor=i;
    }
}
printf("A posicao onde se encontra o maior eh %d, ja a que se encontra o menor eh %d.",maior,menor);
return 0;
}