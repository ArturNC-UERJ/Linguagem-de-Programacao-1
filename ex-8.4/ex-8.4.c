#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f, char* str){
    for (int i = 0; i < strlen(str); i++){
        fputc(str[i], f);
    }
}

int main(void){
    FILE* f;
    char texto[26];
    f = fopen("C:\\Users\\ARTUR\\Desktop\\ex-8.4.txt", "w");
    printf("Insira a string: \n\n");
    gets(texto);
    escreva_string(f, texto);
    printf("\nString gravada no arquivo com sucesso!\n");
    fclose(f);
    return 0;
}
