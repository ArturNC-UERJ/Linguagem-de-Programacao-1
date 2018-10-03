#include <stdio.h>

void compra(int* conta, int valor)
{
    *conta = *conta - valor;
}
int main(void)
{
    int conta1, conta2, valor, i;
    int compras[] = {100, 50, 80, 30, 20};
    int* conta;
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta2);
    for (i = 0; i < 5; i++)
    {
        if (conta1 > conta2)
        {
            conta = &conta1;
        }
        else
        {
            conta = &conta2;
        }
        valor = compras[i];
        compra(conta, valor);
        printf("\nSaldo das contas apos compra %d (No valor de R$%d):\n\nCONTA 1: %d\nCONTA 2: %d\n", i+1, compras[i], conta1, conta2);
    }
    return 0;
}
