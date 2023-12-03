#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
  

void main(){
    char str1[20], str2[20];
    int menu;
    while(1){
        system("cls");
        printf("No menu abaixo selecione aquilo que deseja fazer.\n");
        printf("\n\"1\" para inserir uma string_1.");
        printf("\n\"2\" para saber o tamanho da string_1.");
        printf("\n\"3\" para comparar a string_1 com outra.");
        printf("\n\"4\" para concatenar a string_1 com outra string.");
        printf("\n\"5\" para receber a string_1 invertida.");
        printf("\n\"6\" para entao inserir um caractere e saber quantas vezes ele se repete na string_1.");
        printf("\n\"7\" para entao inserir dois caracteres e receber a string_1 com as primeiras ocasioes de cada caractere substituidas pelo outro.");
        printf("\n\"8\" para saber se a string_1 eh substring de outra ou vice-versa.");
        printf("\n\"9\" para entao inserir a posicao de partida de uma substring e seu comprimento, recebendo a substring no fim.");
        printf("\n\"10\" pra sair do menu.");
    
        printf("\n\nDigite aqui: ");
        scanf(" %d", &menu);

        if (menu == 10){
            break;
        }

        setbuf(stdin, NULL);

        switch (menu)
        {
            case 1:
                printf("Insira uma string: ");
                fgets(str1, 20, stdin);
                break;

            case 2:
                printf("O tamanho eh %d.",strlen(str1)-1);
                setbuf(stdin, NULL);
                getchar(); 
                break;

            case 3:
                printf("Insira uma segunda string: \n");
                setbuf(stdin, NULL);
                fgets(str2, 20, stdin);
                if(strcmp(str1, str2) == 0){
                    printf("Sao strings iguais.");
                }else{
                    printf("Sao strings diferentes.");
                }
                setbuf(stdin, NULL);
                getchar();
                break;

            case 4:
                printf("Insira uma segunda string: \n");
                setbuf(stdin, NULL);
                fgets(str2, 20, stdin);

                int i, j, l;
                char str3[40];

                for(l = 0; l < strlen(str1); l++){
                    str3[l]=str1[l];
                }
                for (i = strlen(str1) - 1, j = 0; j < strlen(str2); i++, j++){
                    str3[i] = str2[j];
                }
                
                str3[strlen(str1)+strlen(str2)-1] = '\0';

                printf("\nA concatenacao das duas strings eh: \n");

                printf("%s",str3);
                setbuf(stdin, NULL);
                getchar();
                break;

            case 5:
                printf("A string_1 reversa eh: \n");
                for (int i = (strlen(str1) - 1); i >= 0; i--){
                    printf("%c", str1[i]);
                }
                setbuf(stdin, NULL);
                getchar();
                break;

            case 6:
                printf("Digite um caractere para saber quantas vezes ele aparece na string_1.\n");
                int soma = 0;
                char c;
                scanf("%c", &c);

                for (int i = 0; str1[i] != '\n'; i++){
                    if (str1[i] == c){
                        soma += 1;
                    }
                }
                printf("A quantidade de vezes que o caractere aparece na string eh %d.", soma);
                setbuf(stdin, NULL);
                getchar();
                break;
            case 7:
                printf("Digite dois caracteres para terem suas primeira aparicoes na string substituidas um pelo outro.\n");
                char c1, c2;
                scanf(" %c", &c1);
                scanf(" %c", &c2);

                for (int i = 0; str1[i] != '\n'; i++){
                    if (str1[i] == c2){
                        str1[i] = c1;
                        break;
                    }
                }
                for (int i = 0; str1[i] != '\n'; i++){
                    if (str1[i] == c1){
                        str1[i] = c2;
                        break;
                    }
                }
                printf("A string, com as primeiras aparicoes dos caracteres ja subdtituidos eh: \n");
                printf("%s", str1);
                setbuf(stdin, NULL);
                getchar(); 
                break;

            case 8:
                printf("Insira uma segunda string: \n");
                setbuf(stdin, NULL);
                fgets(str2, 20, stdin);

                int check = 1, p = 0;

                for (int i = 0; str1[i] != '\n'; i++){
                    if (str1[i] == str2[0]){
                        p = i;
                        break;
                    }
                }
                for (int i = p, j = 0; (i < strlen(str2)- 1 + p); i++, j++){
                    if(str1[i] != str2[j]){
                        check = 0;
                    }
                }
                if(check == 1){
                    printf("A string eh substring da string_1.");
                }else{
                    printf("A string nao eh substring da string_1.");
                }
                
                setbuf(stdin, NULL);
                getchar(); 
                break;

            case 9:
                printf("Insira a posicao de inicio da substring contida em string_1.\n");
                char str_sub[20];
                int posi, comp, h = 0, cont;
                scanf(" %d", &posi);
                printf("Insira o comprimento da substring.\n");
                scanf(" %d", &comp);
                
                for (cont = posi, h = 0; cont < posi + comp; cont++, h++){
                    str_sub[h] = str1[cont];
                }


                printf("\n%d\n%d\n%d\n%d\n", h, posi, comp, cont);

                str_sub[h] = '\0';

                printf("A substring eh:\n");
                printf("%s", str_sub);

                setbuf(stdin, NULL);
                getchar(); 
                break;
        }
    }
}