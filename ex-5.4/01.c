#include <stdio.h>

void troca(int* p1, int* p2)
{
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main(void)
{
    int x = 10, y = 20;
    p1 = &x;
    p2 = &y;
    troca(p1, p2);
    printf("x = %d y = %d\n", x, y);
    return 0;
}
