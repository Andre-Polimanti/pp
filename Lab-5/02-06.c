#include <stdio.h>

int main()
{
int A[4][4];

printf("Matriz 10x10 que segue as regras estipuladas.\n");

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(i<j){
            A[i][j]=0;
        }else if(i==j){
            A[i][j]=9;
        }else{
            A[i][j]=3;
        }
    }
}
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
}
return 0;
}