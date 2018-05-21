#include <stdio.h>

int main (void){
    int a;
    int b;
    int* p;
    printf ("Digite o primeiro valor: ");
    scanf ("%d\n", &a);
    printf ("Digite o segundo valor: ");
    scanf ("%d\n", &b);
    printf ("Valor1= %d\n Valor2= %d\n", a, b);
    if (a > b){
        p = &a;
    }
    else{
        p = &b;
    }
    *p = *p - 50;
    printf ("%d\n", *p);
    return 0;
}
