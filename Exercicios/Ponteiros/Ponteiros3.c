#include <stdio.h>

void compra (int* conta, int valor){
    *conta = *conta - valor;
}
int main (void){
    int conta1, conta2, i;
    int compras[] = {100, 50, 80, 30, 20};
    printf ("Digite o saldo da conta 1: ");
    scanf ("%d", &conta1);
    printf ("Digite o saldo da conta 2: ");
    scanf ("%d", &conta2);
    for (i = 0; i < 5; i++){
        if (conta1 > conta2){
                compra(&conta1, compras[i]);
        }
        else{
                compra(&conta2, compras[i]);
        }
        printf("%d\n", compras[i]);
        printf("Conta1: %d\n", conta1);
        printf("Conta2: %d\n", conta2);
    }
    printf ("Saldo da conta 1: %d\n", conta1);
    printf ("Saldo da conta 2: %d\n", conta2);
    return 0;
}
