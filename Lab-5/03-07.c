#include <stdio.h>

int main(){
    char string[100];
    int i,j;
    setbuf(stdin,NULL);
    gets(string);
    for (i = 0;string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            for (j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j+1];
            }   
        }   
    }
    printf("%s",string);
}