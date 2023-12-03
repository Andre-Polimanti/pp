#include <stdio.h>

int main()
{
int matriz[4][4],v=0;

printf("Digite valores para uma matriz 4x4 e descubra quantos deles sao maiores que 10.\n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&matriz[i][j]);
    }
}
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(matriz[i][j]>10){
            v+=1;
        }
    }
}
printf("A matriz possui %d valores maiores que 10.",v);
return 0;
}