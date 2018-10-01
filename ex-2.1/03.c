#include <stdio.h>

/*Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. Um dólar
está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.*/

int main(void)
{
    float dolar, real;

    printf("Insira o valor em dolares: ");
    scanf("%f", &dolar);
    real = dolar * 3.17;
    if (real <= 1000)
    {
        printf("\nBom negocio\n");
    }
    return 0;
}
