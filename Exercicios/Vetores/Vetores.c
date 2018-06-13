#include <stdio.h>

void preenche (int* vec, int n){
    int a, i, j;
    for (i = 0; i < n; i++){
        printf ("Digite um valor: ");
        scanf ("%d", &a);
        vec[i] = a;
    }
}
void media (int* vec, int n){
    int soma = 0;
    int cont = 0;
    for (int i = 0; i < n; i++){
        soma = soma + vec[i];
        cont++;
    }
    int med = soma/cont;
    printf ("Valor medio: %d", med);
}

int main (void){
    int vec[5];
    preenche (vec, 5);
    media(vec, 5);
    return 0;
}
