#include <stdio.h>
#include <stdlib.h>
struct padding {
    char c1;
    double * pd1;
    char c2;
    int *pi1;
    char c3;
    int i1;
    float f1;
};

struct padding2 {
    double * pd1;
    int *pi1;
    char c1;
    char c2;
    char c3;
    int i1;
    float f1;
};


struct conta {
    int id;
    float saldo;
};

typedef struct conta Conta;

struct banco {
    Conta *contas;
    int contaAbertas;
};

typedef struct banco Banco; 
typedef int Integer;

int main(){
    printf("Conta: %ld\n", sizeof(struct padding));
    printf("Conta: %ld\n", sizeof(struct padding2));
    /*Integer a = 10; // Ilustrando typedef
    Banco bacen;
    bance.contasAbertas = 0;
    bacen.contas = calloc(50, sizeof(Conta));
    bacen.contas[0].id = 7;
    bacen.contas[0].saldo = 100.0;
    bacen.contasAbertas++;
    printf("Conta \n    id:%d \n    saldo:%.2f\n", 
           bacen.contas[0].id, bacen.contas[0].saldo);
    
    bacen.contas[1].id = 8;
    bacen.contas[1].saldo = 200.0;
    
    printf("Conta \n    id:%d \n    saldo:%.2f\n", 
           bacen.contas[1].id, bacen.contas[1].saldo);
           */
    return 0;
}