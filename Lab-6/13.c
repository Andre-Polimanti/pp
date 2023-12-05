#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento,
Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem
sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma
informação estava errada.*/

typedef struct {
    int Dia, Mes, Ano;
} Data;

typedef struct {
    char Nome[100], Endereco[60], Cidade[20], CEP[12], email[30];
    Data Nascimento;
} Informacoes;

void main ()
{
    system("cls");

    Informacoes Pessoa;

    printf("Insira seu nome: ");
    fgets(Pessoa.Nome, 100, stdin);
    Pessoa.Nome[strlen(Pessoa.Nome) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Insira sua data de nascimento (dia, mes e ano, respectivamente): ");
    scanf("%d/%d/%d", &Pessoa.Nascimento.Dia, &Pessoa.Nascimento.Mes, &Pessoa.Nascimento.Ano);
    setbuf(stdin,NULL);

    printf("Insira seu endereco (ex: Rua Jose, 100): ");
    fgets(Pessoa.Endereco, 60, stdin);
    Pessoa.Endereco[strlen(Pessoa.Endereco) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Insira sua cidade: ");
    fgets(Pessoa.Cidade, 20, stdin);
    Pessoa.Cidade[strlen(Pessoa.Cidade) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Insira seu CEP: ");
    fgets(Pessoa.CEP, 12, stdin);
    Pessoa.CEP[strlen(Pessoa.CEP) - 1] = '\0';
    setbuf(stdin,NULL);

    printf("Insira seu e-mail: ");
    fgets(Pessoa.email, 30, stdin);
    Pessoa.email[strlen(Pessoa.email) - 1] = '\0';
    setbuf(stdin,NULL);

    int check;
    int Erro = 0;

    check = 0;

    //Nome
    for (int i = 0; i < strlen(Pessoa.Nome); i++){
        if (!(((Pessoa.Nome[i] >= 65) && (Pessoa.Nome[i] <= 90)) || ((Pessoa.Nome[i] >= 97) && (Pessoa.Nome[i] <= 122)) || (Pessoa.Nome[i] == 32))){
            check++;
            Erro++;
        }
    }
    
    if (check != 0){
        printf("O nome inserido apresenta caracteres invalidos.\n");
    }

    //Data de nascimento
    check = 0;

    if ((Pessoa.Nascimento.Mes == 4 || Pessoa.Nascimento.Mes == 6 || Pessoa.Nascimento.Mes == 9 || Pessoa.Nascimento.Mes == 11) && (Pessoa.Nascimento.Dia > 30 || Pessoa.Nascimento.Dia < 1)){
        check++;
        Erro++;
    }else if (Pessoa.Nascimento.Mes == 2 && (Pessoa.Nascimento.Dia > 28 || Pessoa.Nascimento.Dia < 1)){
        check++;
        Erro++;
    }else if (Pessoa.Nascimento.Dia > 31 || Pessoa.Nascimento.Dia < 1){
        check++;
        Erro++;
    }

        if (check != 0){
            printf("A data de nascimento inserida eh invalida.\n");
        }

    //Endereco
    char Endereco_Char[50];
    char Endereco_Num[10];
    int Indice = 0;

    check = 0;

    for (; Indice < strlen(Pessoa.Endereco) && Pessoa.Endereco[Indice] != ','; Indice++){
        Endereco_Char[Indice] = Pessoa.Endereco[Indice];
    }

    Indice += 2;

    for (int i = 0; i < (strlen(Pessoa.Endereco) - strlen(Endereco_Char)); i++, Indice++){
        Endereco_Num[i] = Pessoa.Endereco[Indice];
    }

    for (int i = 0; i < strlen(Endereco_Char)-1; i++){
        if (!(((Endereco_Char[i] >= 65) && (Endereco_Char[i] <= 90)) || ((Endereco_Char[i] >= 97) && (Endereco_Char[i] <= 122))) && (Endereco_Char[i] != ' ') && (Endereco_Char[i] != ',')){
            check++;
            Erro++;
        }
    }

    for (int i = 0; i < strlen(Endereco_Num); i++){
        if (!((Endereco_Num[i] >= 48) && (Endereco_Num[i] <= 57))){
            check++;
            Erro++;
        }
    }

    if (check != 0){
        printf("O endereco inserido eh invalido.\n");
        printf("%s", Endereco_Num);
    }

    check = 0;

    //Cidade
    for (int i = 0; i < strlen(Pessoa.Cidade); i++){
        if (!(((Pessoa.Cidade[i] >= 65) && (Pessoa.Cidade[i] <= 90)) || ((Pessoa.Cidade[i] >= 97) && (Pessoa.Cidade[i] <= 122)) || (Pessoa.Cidade[i] == 32))){
            check++;
            Erro++;
        }
    }

    if (check != 0){
        printf("A cidade inserida apresenta caracteres invalidos.\n");
    }

    check = 0;

    //CEP
    for (int i = 0; i < strlen(Pessoa.CEP); i++){
        if (!((Pessoa.CEP[i] >= 48) && (Pessoa.CEP[i] <= 57))){
            check++;
            Erro++;
        }
    }

    if (check != 0){
        printf("O CEP inserido apresenta caracteres invalidos.\n");
    }else if (strlen(Pessoa.CEP) != 8){
        printf("A quantidade de algarismos do CEP inserido esta errada.\n");
    }

    check = 0;

    //E-mail
    for (int i = 0; i < strlen(Pessoa.email); i++){
        if (!(((Pessoa.email[i] >= 48) && (Pessoa.email[i] <= 57)) || ((Pessoa.email[i] >= 65) && (Pessoa.email[i] <= 90)) || ((Pessoa.email[i] >= 97) && (Pessoa.email[i] <= 122)) || (Pessoa.email[i] == '.') || (Pessoa.email[i] == '@'))){
            check++;
            Erro++;
        }
    }

    if (check != 0){
        printf("O e-mail inserido ou tem caracteres invalidos ou possui uma quantidade incorreta de arrobas.\n");
    }

    if (Erro == 0){
        printf("\nTudo correto!\n");
        printf("Nome: %s\n", Pessoa.Nome);
        printf("Data de nascimento: %.2d/%.2d/%d\n", Pessoa.Nascimento.Dia, Pessoa.Nascimento.Mes, Pessoa.Nascimento.Ano);
        printf("Endereco: %s\n", Pessoa.Endereco);
        printf("Cidade: %s\n", Pessoa.Cidade);
        printf("CEP: %s\n", Pessoa.CEP);
        printf("E-mail: %s\n", Pessoa.email);
    }
}
