#include <stdio.h>

int minha_strlen(char* str){
    int i = 0, tamanho = 0;
    while (str[i] != '\0'){
        tamanho++;
        i++;
    }
    return tamanho;
}

int main(void){
    char txt[50];
    printf("Insira sua string: ");
    gets(txt);
    printf("A string tem %d elementos", minha_strlen(txt));
    return 0;
}
