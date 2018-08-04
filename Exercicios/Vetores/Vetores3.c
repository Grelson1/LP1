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
        printf("Escreva os valores de x e y do ponto: ");
        scanf("%d%d", &x, &y);
        pontos[i] = preenche(x, y);
    }
}
struct Ponto minimo(struct Ponto pontos[10]) {
    int i, dist = -1;
    struct Ponto p;
    for (i = 0; i < 10; i++) {
        struct Ponto po = pontos[i];
        int d1 = (po.x * po.x) + (po.y * po.y);
        if (d1 > dist) {
            dist = d1;
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
    printf("O ponto mais distante da origem é P(%d %d).\n", p.x, p.y);
    return 0;
}
