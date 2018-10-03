#include <stdio.h>

void compra(int* conta, int valor)
{
    *conta = *conta - valor;
}
int main(void)
{
    int conta1, conta2, valor;
    int* conta;
    valor = 500;
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta2);
    if (conta1 > conta2)
    {
        conta = &conta1;
    }
    else
    {
        conta = &conta2;
    }
    compra(conta, valor);
    printf("Saldo das contas apos compra:\nCONTA 1: %d\nCONTA 2: %d", conta1, conta2);
    return 0;
}
