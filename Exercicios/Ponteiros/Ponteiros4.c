#include <stdio.h>

int troca (int* p1, int* p2){
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}
int main (void){
    int x = 5;
    int y = 10;
    printf("X=5\nY=10\n");
    troca (&x, &y);
    printf("X=%d\nY=%d", x, y);
}
