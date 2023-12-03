#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tempo,idade;

    printf("Digite a idade e o tempo de servico de um individuo para saber se ele eh elegivel a aposentadoria.\n");
    scanf("%d %d",&idade,&tempo);

    if((tempo>=30)||(idade>=65)||(idade>=60&&tempo>=25)){
        printf("Eh elegivel.");
    }else{
        printf("Nao eh elegivel.");
    }

return 0;
}
