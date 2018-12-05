#include <stdio.h>

struct Item{
    char nome[35];
    float valor;
    int tipo; //Discriminação de union
    union {
        float quilos; //1
        float litros; //2
    } medida;
};

int main(void){
    struct Item item[3];
    printf("Vamos criar a lista de compras:\n");
    for (int i = 0; i < 3; i++){
        printf("\nITEM %d:\n", i+1);
        printf("Digite o nome do item: ");
        scanf("%s", item[i].nome);
        printf("Digite o preco do item: ");
        scanf("%f", &item[i].valor);
        printf("O item eh medido em Kg(Digite 1) ou L(Digite 2)? ");
        scanf("%d", &item[i].tipo);
        if (item[i].tipo == 1){
            printf("Digite o peso do item em quilos: ");
            scanf("%f", &item[i].medida.quilos);
        }
        else {
            printf("Digite o peso do item em litros: ");
            scanf("%f", &item[i].medida.litros);
        }
    }
    printf("%30s\n\n", "= LISTA DE COMPRAS =");
    printf("%8s %22s %20s\n\n", "NOME", "PRECO", "PESO");
    for (int i = 0; i < 3; i++){
        if (item[i].tipo == 1){
            printf("%d - %-21s R$%-19.2f %-.1f(KG)\n", i+1, item[i].nome, item[i].valor, item[i].medida.quilos);
        }
        else if (item[i].tipo == 2){
            printf("%d - %-21s R$%-19.2f %-.1f(L)\n", i+1, item[i].nome, item[i].valor, item[i].medida.litros);
        }
    }
    return 0;
}
