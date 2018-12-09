#include <stdio.h>
#include <string.h>

int main(void){
    char string[10][26];
    FILE* f;
    f = fopen("C:\\Users\\ARTUR\\Desktop\\ex-8.3.txt", "w");
    for (int i = 0; i < 10; i++){
        scanf("%s", string[i]);
        for (int j = 0; j < 26; j++){
            if (string[i][j] == '\0'){
                break;
            }
            fputc(string[i][j], f);
        }
        fputc('\n', f);
    }
    fclose(f);
    return 0;
}
