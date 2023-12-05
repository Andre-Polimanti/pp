#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct eletrodomestico {
    char nome[15];
    float potencia, tempo_ativo, consumo;
} eletrodomestico;

int main() {
    eletrodomestico dispositivo[5];
    int t;
    float consumo_total = 0, participacao;

    system("cls");

    for (int i = 0; i < 5; i++){
        printf("Digite o nome do %d eletrodomestico: ", i+1);
        fgets(dispositivo[i].nome, 15, stdin);
        setbuf(stdin, NULL);
        dispositivo[i].nome[strcspn(dispositivo[i].nome, "\n")] = 0;
        printf("Sua potencia, em kW: ");
        scanf("%f", &dispositivo[i].potencia);
        setbuf(stdin, NULL);
        printf("Seu tempo ativo diario, em horas: ");
        scanf("%f", &dispositivo[i].tempo_ativo);
        setbuf(stdin, NULL);
        dispositivo[i].consumo = dispositivo[i].potencia * dispositivo[i].tempo_ativo;
        consumo_total += dispositivo[i].consumo;
    }
    printf("Qual o periodo de dias que voce deseja calcular o consumo total energetico na casa?\n");
    scanf(" %d", &t);

    printf("\n\nDo periodo de dias requisitado, as seguintes informacoes estao disponiveis:\n");

    printf("O consumo total foi \"%.2fkWh\".\n", consumo_total);

    for (int i = 0; i < 5; i++){
        printf("O consumo do(a) %s foi: \"%.2fkWk.\"\n", dispositivo[i].nome, dispositivo[i].consumo);
        printf("Seu consumo relativo foi \"%.2f%%\".\n", (dispositivo[i].consumo * 100) / consumo_total);
        participacao = (dispositivo[i].consumo * 100) / consumo_total;
    }
}