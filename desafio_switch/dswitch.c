#include <stdio.h>

enum Error {NONE, DIVISION, OPERATION};

char calculate() {
    float a, b, result = 0;
    char op;
    char error = NONE;
    scanf("%f%c%f", &a, &op, &b);
    switch(op) {
        case '+': {
            result = a + b;
            break;
        }
        case '-': {
            result = a - b;
            break;
        }
        case '*': {
            result = a * b;
            break;
        }
        case '/': {
            if(b != 0) {
                result = a / b;
            } else {
                error = DIVISION;
            }
            break;
        }
        default:
            error = OPERATION;
    }
    switch(error) {
        case NONE:
            printf("=%.2f\n", result);
            break;
        case DIVISION:
            printf("=E division error!\n");
            break;
        case OPERATION:
            printf("=E operation error!\n");
            break;
    }
    return error;
}

int main() {
    return calculate();
}