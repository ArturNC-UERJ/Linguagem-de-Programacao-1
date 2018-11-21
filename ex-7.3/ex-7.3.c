#include <stdio.h>
#include <math.h>

struct Ponto{
    int x;
    int y;
};

void preenche(int i, struct Ponto* vec){
    printf("Insira a Abscissa do elemento %d: ", i+1);
    scanf("%d", &(vec[i]).x);
    printf("Insira a Ordenada do elemento %d: ", i+1);
    scanf("%d", &(vec[i]).y);
}

void preenche_vetor(struct Ponto* vec){
	int i;
    for(i = 0; i < 10; i++){
        preenche(i, vec);
    }
}

struct Ponto ponto_distante(struct Ponto* vec){
    int D, i;
    struct Ponto mais_distante;
    D = sqrt(pow(0-((vec[0]).x),2)+pow(0-((vec[0]).y),2));
    mais_distante.x = vec[0].x;
    mais_distante.y = vec[0].y;
    for (i = 1; i < 10; i++){
        if (sqrt(pow((0-vec[i].x),2)+pow((0-vec[i].y),2)) > D){
            D = sqrt(pow((0-vec[i].x),2)+pow((0-vec[i].y),2));
            mais_distante.x = vec[i].x;
            mais_distante.y = vec[i].y;
        }
    }
    return mais_distante;
}

int main(void){
    struct Ponto vetor[10];
    struct Ponto D;
    preenche_vetor(vetor);
    D = ponto_distante(vetor);
    printf("\nPonto mais distante: (%d,%d)\n", D.x, D.y);
    return 0;
}
