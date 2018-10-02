#include <stdio.h>

//Guardar 50 temperaturas em um vetor com valores entre -100 e 100, calcular media, mostrar quantidade de leituras acima da media.

int main(void)
{
    int i, qtd;
    float soma, media, temporario;
    char temps[5];
    i = qtd = soma = media = 0;
    for (i; i < 5; i++)
    {
        printf("Insira uma temperatura (entre -100 e 100): ");
        scanf("%f", &temporario);
        if (temporario < -100 || temporario > 100)
        {
            printf("\nPor favor, apenas insira valores entre -100 e 100\n\n");
            i--;
        }
        else
        {
            temps[i] = temporario;
            soma += temps[i];
        }
    }
    media = soma / 5;
    printf("\nA media das temperaturas foi de %.2f\n", media);
    for (i = 0; i < 5; i++)
    {
        if (temps[i] > media)
        {
            qtd += 1;
        }
    }
    printf("Quantidade de leituras acima da media: %d\n", qtd);
    return 0;
}
