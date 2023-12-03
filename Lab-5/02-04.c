#include <stdio.h>

int main()
{
int matriz[5][5],x,col=-1,lin=-1;

printf("Insira valores de uma matriz 5x5 seguidos por um valor a ser buscado na matriz.\n");

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d",&matriz[i][j]);
    }
}
printf("Insira o valor a ser buscado.\n");
scanf("%d",&x);
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(x==matriz[i][j]){
        lin=i;
        col=j;
    }
}
}
if((col!=-1)&&(lin!=-1)){
    printf("Valor encontrado na linha %d e coluna %d.",lin+1,col+1);
}else{
    printf("Nao encontrado");
}
return 0;
}