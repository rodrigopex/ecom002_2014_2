#include <stdio.h>

int menor, medio, maior;

void manhaDaAriranha(int x, int y, int z) {
    maior = x;
    if(y >= z) {
        medio = y;
        menor = z;
    } else {
        medio = z;
        menor = y;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c) {
        manhaDaAriranha(a, b, c);
    } else if (b >= a && b >= c) {
        manhaDaAriranha(b, a, c);
    } else {
        manhaDaAriranha(c, a, b);
    }
    printf("%d %d %d\n", menor, medio, maior);
    return 0;
}
