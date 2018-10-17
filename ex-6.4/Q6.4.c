#include <stdio.h>

int strlen(char* str);

int main(void)
{
    char str[30];
    printf("Insira sua string: ");
    gets(str);
    printf("A string tem %d elementos", strlen(str));
    return 0;
}

int strlen(char* str)
{
    int i = 0, tamanho = 0;
    while (str[i] != '\0')
    {
        tamanho++;
        i++;
    }
    return tamanho;
}
