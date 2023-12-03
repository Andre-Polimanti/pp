#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,l,consumo;

    printf("Digite quantos quilometros voce andou com seu carro e quantos litros de gasolina foram gastos.\n");
    scanf("%f %f",&km,&l);
    consumo=km/l;

    if(consumo<8){
       printf("Venda o carro!");

    }else if((consumo>=8)&&(consumo<=14)){
        printf("Economico!");

    }else{
        printf("Super economico!");

    }
return 0;
}
