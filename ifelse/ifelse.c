#include <stdio.h>
#include <stdlib.h>

//TODO: intervalos ...

/*
    if(condicao)
        //verdade
    else
        //falso
        
    0 - false
    qualquer outra coisa - verdadeiro

*/

void calculadora() {
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    if(c == '+') {
        printf("=%d\n", a + b);    
    } else {
        if(c == '-') {
            printf("=%d\n", a - b);
        } else {
            printf("=E\nOperação inválida!\n");
        }
    }
}

void calculadoraX() {
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    if(c == '+') {
        printf("=%d\n", a + b);    
    } else if(c == '-') {
        printf("=%d\n", a - b);
    } else if(c == '*') {
        printf("=%d\n", a * b);
    } else if(c == '/') {
        if(b) {
            printf("=%d\n", a / b);
        } else {
            printf("=E\nDivisão por zero!\n");
        }
    } else {
        printf("=E\nOperação inválida!\n");
    }
    
}

int main() {
    //calculadora();
    calculadoraX();
    return 0;
}