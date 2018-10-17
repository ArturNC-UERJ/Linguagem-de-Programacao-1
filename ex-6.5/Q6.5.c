#include <stdio.h>

int strlen(char* str);
void strjoin(char* str3, char* str1, char* str2);
int main(void)
{
    char str1[40], str2[40], str3[100];
    printf("Insira a string 1: ");
    gets(str1);
    printf("Insira a string 2: ");
    gets(str2);
    strjoin(str3, str1, str2);
    printf("Nova string: %s", str3);
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

void strjoin(char* str3, char* str1, char* str2)
{
    int i, j;
    j = strlen(str1);
    for (i = 0; i < strlen(str1); i++)
    {
        str3[i] = str1[i];
    }
    for (i = 0; i < strlen(str2); i++)
    {
        str3[j] = str2[i];
        j++;
    }
    str3[j] = '\0'; //Identificar de final de string.
}
