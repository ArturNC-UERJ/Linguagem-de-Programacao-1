#include <stdio.h>
#include <string.h>

int main(void){
    char texto[26];
    FILE* f;
    f = fopen("C:\\Users\\ARTUR\\Desktop\\ex-8.1.txt", "w");
    scanf("%s", &texto);
    for (int i = 0; i < strlen(texto); i++){
        fputc(texto[i], f);
    }
    fclose(f);
    return 0;
}
