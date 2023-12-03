#include <stdio.h>

int main()
{
int A[6],sp=0,qi=0;
printf("Insira seis numeros inteiros e receba os numeros pares digitados, a soma dos numeros pares digitados, os numeros impares digitados e a quantidade de numeros impares digitados.\n");

for(int i=0;i<6;i++)
{
    scanf("%d",&A[i]);
}
for(int i=0;i<6;i++)
    {
    if(A[i]==0||A[i]%2==0)
    {
        printf("O elemento %d eh par.\n",A[i]);
        sp+=A[i];
    }
}
printf("\nA soma dos numeros pares eh %d.\n\n",sp);
for(int i=0;i<6;i++)
{
    if(A[i]%2!=0){
        printf("O elemento %d eh impar.\n",A[i]);
        qi+=1;
    }
}
printf("\nA quantidade dos numeros impares eh %d.\n",qi);
return 0;
}