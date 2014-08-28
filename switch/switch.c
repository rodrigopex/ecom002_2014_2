#include <stdio.h>

/*
 - Intervalos do if/else
 - Tabela verdade para if/else
 - Operador condicional ternario
 - Switch/case
 - enum : Enumeracao
*/

enum Estado {PRONTO=0, ESPERANDO, FAZENDO};

int main() {
    Estado a;
    scanf("%d", &a);
    switch(a) {
    case PRONTO: {
        printf("a = PRONTO\n");
        break;
    }
    case ESPERANDO:
        printf("a = ESPERANDO\n");
        break;
    case FAZENDO:
        printf("a = FAZENDO\n");
        break;
    default:
        printf("a = NAO IDENTIFICADO\n");
    }
    return 0;
}
