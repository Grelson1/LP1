#include <stdio.h>
void preenche (int v[2][3]){
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("Valor para linha %d e coluna %d:", i, j);
            scanf ("%d", &v[i][j]);
        }
    }
}
int media (int u[2][3]){
    int i, j, soma, med;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            soma = soma + u[i][j];
        }
    }
    med = soma/6;
    return med;
}

int main (void){
    int arr [2][3];
    preenche (&arr[2][3]);
    int x = media(&arr[2][3]);
    printf ("Media dos valores do array: %d", x);
}
