#include <stdio.h>

int main()
{
    int matriz_A[2][2], matriz_B[2][2], n, matriz_C[2][2];

    printf("Insira os valores da matriz A.\n");
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matriz_A[i][j]);
        }
    }

    printf("Insira os valores da matriz B.\n");
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matriz_B[i][j]);
        }
    }

    printf("No menu abaixo, escolha uma operacao a realizar.\n\n");

    printf("'1' para soma entre as matrizes.\n");
    printf("'2' para subtracao entre as matrizes.\n");
    printf("'3' para somar uma constante as duas matrizes.\n");
    printf("'4' para imprimir as matrizes.\n");

    scanf("%d",&n);

    switch(n)
    {
        case 1:
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    for(int i=0;i<2;i++){
                        for(int j=0;j<2;j++){
                            if((i==k)&&(j==l)){
                                matriz_C[i][j]=matriz_A[i][j]+matriz_B[i][j];
                            }
                        }
                    }

                }
            }
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%2.d ",matriz_C[i][j]);
                }
                printf("\n");
            }
        break;

        case 2:
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    for(int i=0;i<2;i++){
                        for(int j=0;j<2;j++){
                            if((i==k)&&(j==l)){
                                matriz_C[i][j]=matriz_A[i][j]-matriz_B[i][j];
                            }
                        }
                    }

                }
            }
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%2.d ",matriz_C[i][j]);
                }
                printf("\n");
            }
    
        break;
    
        case 3:
            printf("Insira a constante: ");
            int k;
            scanf("%d",&k);

            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    matriz_C[i][j]=matriz_A[i][j]+k;
                }
            }
            printf("\n\nMatriz A\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%2.d ",matriz_C[i][j]);
                }
                printf("\n");
            }
    
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    matriz_C[i][j]=matriz_B[i][j]+k;
                }
            }
            printf("\n\nMatriz B\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%2.d ",matriz_C[i][j]);
                }
                printf("\n");
            }

        break;

        case 4:

            printf("\n\nMatriz A\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%2.d ",matriz_A[i][j]);
                }
                printf("\n");
            }
            printf("\n\nMatriz B\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%2.d ",matriz_B[i][j]);
                }
                printf("\n");
            }
        break;

        default:
            printf("Valor invalido!");
    }
}