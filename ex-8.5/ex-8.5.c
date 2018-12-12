#include <stdio.h>
#include <stdlib.h>

struct Item{
    char nome[35];
    float valor;
    int tipo; //Discriminação de union
    union {
        float quilos; //1
        float litros; //2
    } medida;
};

void grava(FILE* arq, struct Item* item){
    for (int i = 0; i < 3; i++){
        fwrite(&item[i], sizeof(struct Item), 1, arq);
    }
}

void le(FILE* arq, struct Item* item){
    for (int i = 0; i < 3; i++){
        fread(&item[i], sizeof(struct Item), 1, arq);
    }
}

int main(void){
    struct Item item[3];
    struct Item novos[3];

    FILE* arq;

    arq = fopen("C:\\Users\\ARTUR\\Desktop\\ex-8.5.bin", "wb");
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
    grava(arq, item);
    printf("\nINFORMACOES GRAVADAS COM SUCESSO!\n");
    fclose(arq);

    arq = fopen("C:\\Users\\ARTUR\\Desktop\\ex-8.5.bin", "rb");
    le(arq, novos);
    fclose(arq);

    printf("%30s\n\n", "= LISTA DE COMPRAS =");
    printf("%8s %22s %20s\n\n", "NOME", "PRECO", "PESO");
    for (int i = 0; i < 3; i++){
        if (novos[i].tipo == 1){
            printf("%d - %-21s R$%-19.2f %-.1f(KG)\n", i+1, novos[i].nome, novos[i].valor, novos[i].medida.quilos);
        }
        else if (novos[i].tipo == 2){
            printf("%d - %-21s R$%-19.2f %-.1f(L)\n", i+1, novos[i].nome, novos[i].valor, novos[i].medida.litros);
        }
    }

    return 0;
}
