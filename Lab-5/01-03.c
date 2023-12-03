#include <stdio.h>

int main()
{
int A[6];
printf("Insira seis valores em uma ordem para recebelos na ordem inversa.\n");
for(int i=0;i<6;i++)
{
    scanf("%d",&A[i]);
}
for(int i=5;i>=0;i--)
{
    printf("%d\n",A[i]);
}
return 0;
}