//f(x) = x + 1
//f(5) = 6
#include <stdio.h>


int soma(int x, int y) {
    return x + y; 
}

double somaD(double x, double y) {
    return x + y; 
}

int main() {
    int a = 5;
    int b = 7;
    scanf("%i %i", &a, &b);
    printf("resultado: %i\n", a + b);
    
    return 0;
}
