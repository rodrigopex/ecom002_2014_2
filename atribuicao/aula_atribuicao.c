#include <stdio.h>

int main() {
    int a = 10, b = 0;
    a = a + 1;
    a += 1;
    a++;

    a = a - 1;
    a -= 1;
    a--;
    
    a = a * 1;
    a *= 1;
    //a**;
    
    a = a / 2;
    a /= 2;
    //a//;
    
    a = 3;
    int c = a++;
    printf("a = %d, c = %d\n", a, c); //4, 3 
    
    a = 3;
    c = ++a;
    printf("a = %d, c = %d\n", a, c); //4, 4 
    
    /* Melhor legibilidade! */
    a = 3;
    ++a;
    c = a;
    printf("a = %d, c = %d\n", a, c); //4, 4 
    
    return 0;
}
