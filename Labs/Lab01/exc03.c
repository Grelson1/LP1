#include <stdio.h>

int main (void){
    float valor;
    int maximo;
    float real;
    maximo = 1000;
    printf("Custo do celular: ");
    scanf("%f", valor);
    real = 3.17*valor;
    if ( real < maximo){
        printf ("BOM NEGOCIO!");
    }
    return 0;
}
