#include <stdio.h>

int main()
{
int s,A[8],X,Y;
printf("Insira os oito valores do vetor.");
for(int i=0;i<8;i++)
{
scanf("%d",&A[i]);
}
printf("Insira dois valores correspondentes as posicoes do vetor para terem seus conteudos somados.");
scanf("%d",&X);
scanf("%d",&Y);
s=A[X]+A[Y];
printf("A soma eh %d",s);
return 0;
}