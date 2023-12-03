#include <stdio.h>

int main()
{
int matriz[5][5];

printf("Matriz preenchida com 1 a diagonal principal e com 0 os demais elementos.");

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i==j){
            matriz[i][j]=1;
        }else{
            matriz[i][j]=0;
        }
    }
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",matriz[i][j]);
    }
        printf("\n");
}
return 0;
}