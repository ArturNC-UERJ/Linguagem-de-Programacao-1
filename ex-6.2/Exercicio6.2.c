#include <stdio.h>

void preenche(int arr[3][2], int lc);
int media(int arr[3][2], int l, int c);

int main(void)
{
    int arr[3][2], lc, l = 3, c = 2, med;
    lc = l*c;
    preenche(arr, lc);
    med = media(arr, l, c);
    printf("Media dos valores do array: %d", med);
    return 0;
}

void preenche(int arr[3][2], int lc)
{
    int i, j;
    for (i = 0; i < 3 ; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}
int media(int arr[3][2], int l, int c)
{
    int med = 0, soma = 0, i, j;
    for (i = 0; i < l ; i++)
    {
        for (j = 0; j < c; j++)
        {
            soma += arr[i][j];
        }
    }
    med = (soma/(l*c));
    return med;
}
