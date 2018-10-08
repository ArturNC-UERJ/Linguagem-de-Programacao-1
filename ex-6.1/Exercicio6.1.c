#include <stdio.h>

void preenche(int vec[100], int n)
{
    int i;
    for (i = 0 ; i < n ; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", (vec+i));
    }
}
int media(int vec[100], int n)
{
    int med, soma, i;
    med = soma = i = 0;
    for (i ; i < n ; i++)
    {
        soma += *(vec+i);
    }
    med = soma / n;
    return med;
}
int main(void)
{
    int vec[100], med, n;
    printf("Digite a quantidade de leituras: ");
    scanf("%d", &n);
    preenche(vec, n);
    med = media(vec, n);
    printf("Media dos valores: %d", med);
    return 0;
}

