#include <stdio.h>

struct Caixa{
	int valor;
	struct Caixa* prox;
};

int main (void){
	struct Caixa c0, c1, c2, c3, c4;
	c4.valor = 5;
	c4.prox = NULL;
	c3.valor = 7;
	c3.prox = &c4;
	c2.valor = 9;
	c2.prox = &c3;
	c1.valor = 3;
	c1.prox = &c2;
	c0.valor = 1;
	c0.prox = &c1;
	printf("%d->%d->%d->%d->%d\n", c0.valor, c0.prox->valor, c0.prox->prox->valor, c0.prox->prox->prox->valor, c0.prox->prox->prox->prox->valor);
}
