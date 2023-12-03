#include <stdio.h>
#include <stdlib.h>

int cons(float a,float b);

int main()
{
    float av,km,l;
    printf("Digite a distancia percorrida por um veiculo.\n");
    scanf("%f",&km);
    printf("Digite a quantidade de gasolina consumida.\n");
    scanf(" %f",&l);
    av=cons(km,l);
    if(av==-1){
        printf("Venda o carro!");
    }else if(av==0){
        printf("Economico!");
    }else{
        printf("Super economico!");
    }

return 0;
}
int cons(float a,float b){
    float c=a/b;
    if(c<8){
            return -1;
    }else if(c>=8&&c<=14){
            return 0;
    }else{
            return 1;
    }
}