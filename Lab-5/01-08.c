#include <stdio.h>

int main()
{
int valor[10],n;
printf("Insira dez valores diferentes para um vetor.\n");
for(int i=0;i<10;i++)
{
    scanf("%d",&n);
if(i>=1){
for(int j=0;j<i;j++)
{
    if(n==valor[j]){
        i--;
        printf("O valor %d ja foi inserido, insira outro.\n",n);
        break;
    }
}
}
valor[i]=n;
}

printf("O vetor final eh: \n");
for(int i=0;i<10;i++)
{
printf("%d\n",valor[i]);
}
return 0;
}