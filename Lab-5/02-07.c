#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int matriz[5][5];

    srand(time(NULL));

    printf("");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            
            while (1) {
                int ver = 1;
                int temp = rand() % 100;
                
                for (int k = 0; k < 5; k++) {
                    for( int l = 0; l < 5; l++) {
                        if (temp == matriz[i][j]) {
                            ver = 0;
                        }
                    }
                }

                if (ver) {
                    matriz[i][j] = temp;
                    break;
                }
            }
            


        }
    }