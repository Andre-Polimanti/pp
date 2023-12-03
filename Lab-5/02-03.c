#include <stdio.h>

int main()
{
int matriz[4][4],maior_coluna=0,maior_linha=0,i,j;

printf("Insira valores de uma matriz 4x4 e descubra a localizacao do maior termo.\n");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        scanf("%d",&matriz[i][j]);
    }
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
}
int maior=matriz[0][0];
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(matriz[i][j]>maior){
            maior=matriz[i][j];
            maior_linha=i;
            maior_coluna=j;
        }
    }
}
printf("A linha do maior valor eh %d e a coluna %d.",maior_linha+1,maior_coluna+1);
return 0;
}