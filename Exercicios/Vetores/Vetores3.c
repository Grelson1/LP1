#include <stdio.h>
struct Ponto {
    int x;
    int y;
};
struct Ponto preenche(int x, int y) {
    struct Ponto p = {x, y};
    return p;
}
void peenche_arr(struct Ponto pontos[10]) {
    int x, y, i;
    for (i = 0; i < 10; i++) {
        printf("Digite x e y: ");
        scanf("%d %d", &x, &y);
        pontos[i] = preenche(x, y);
    }
}
struct Ponto minimo(struct Ponto pontos[10]) {
    int i, longe = -10;
    struct Ponto p;
    for (i = 0; i < 10; i++) {
        struct Ponto po = pontos[i];
        int d1 = (po.x * po.x) + (po.y * po.y);
        if (d1 > longe) {
            longe = d1;
            p = po;
        }
    }
    return p;
}
int main() {
    struct Ponto pontos[10];
    struct Ponto p;
    peenche_arr(pontos);
    p = minimo(pontos);
    printf("Ponto mais longe de (0,0)= (%d %d)\n", p.x, p.y);
    return 0;
}
