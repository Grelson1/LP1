#include <stdio.h>

int main (void){
    int a;
    int b;
    printf ("Insira o primeiro valor: ");
    scanf ("%d", &a);
    printf ("Insira o segundo valor: ");
    scanf ("%d", &b);
    if (a > b){
        printf("Primeiro valor é maior!");
    }
    else if (a == b){
        printf("Valores iguais!");
    }
    else{
        printf ("Segundo valor é maior!");
    }
    return 0;
}
