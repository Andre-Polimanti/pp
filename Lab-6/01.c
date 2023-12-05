#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.*/

typedef struct horario {
    int horas, minutos, segundos;
} horario;

typedef struct data {
    int dia, mes, ano;
} data;

typedef struct compromisso {
    horario h;
    data d;
    char descricao[400];
} compromisso;