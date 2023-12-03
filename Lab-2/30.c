#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("Digite tres numeros inteiros e veja-os em ordem crescente.\n");
    scanf("%d %d %d",&x,&y,&z);

        if(x>y&&y>z){
            printf("%d %d %d",z,y,x);
        }else if(z<x&&z<x&&x<y){
            printf("%d %d %d",z,x,y);
        }else if(y<x&&x<z){
            printf("%d %d %d",y,x,z);
        }else if(y<x&&y<z&&z<x){
            printf("%d %d %d",y,z,x);
        }else if(x<y&&y<z){
            printf("%d %d %d",x,y,z);
        }else{
            printf("%d %d %d",x,z,y);
        }

return 0;
}
