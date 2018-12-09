#include <stdio.h>
#include <string.h>

int main(void){
    char texto[26], x;
    FILE* f;
    f = fopen("C:\\Users\\ARTUR\\Desktop\\ex-8.1.txt", "r");
    for (int i = 0; i < 26; i++){
        x = fgetc(f);
        if (x == -1){
            texto[i] = '\0';
            break;
        }
        printf("%c", x);
    }
    fclose(f);
    return 0;
}
