/*Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000
reais. Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um
bom negócio, escreva BOM NEGÓCIO.*/

#include <stdio.h>

int main()
{
    int valor_dolar, valor_real;
    printf("Entre com o preco em dolares: ");
    scanf("%d", &valor_dolar);
    valor_real = valor_dolar * 3.17;
    if (valor_real < 1000)
        {
            printf("BOM NEGOCIO");
        }
    return 0;
}
