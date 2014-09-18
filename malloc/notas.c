#include <stdlib.h>
#include <stdio.h>

float calculaMedia(float *notas, int tamanho) {
    float media = 0;
    int i;
    for(i = 0; i < tamanho; ++i) {
        media = media + notas[i];
    }
    return media/i;
}

int main () {
    int qtd = 4;
    float *notas = malloc(qtd*sizeof(float)); //HEAP
    //float notas[4]; PILHA
    notas[0] = 7.1;
    notas[1] = 8.3;
    notas[2] = 2.7;
    notas[3] = 6.5;
    printf("%.2f\n", calculaMedia(notas, qtd));
    float *tmp = notas;
    ++qtd;
    notas = calloc(qtd, sizeof(float)); // equivalente malloc(qtd* sizeof(float));
    for(int i = 0; i < 4; ++i)
        notas[i] = tmp[i];
    free(tmp);
    tmp = 0;
    notas[4] = 8.9;
    printf("%.2f\n", calculaMedia(notas, qtd));
    
    qtd++;
    notas = realloc(notas, 3*sizeof(float));
    notas[5] = 7.4;
    printf("%.2f\n", calculaMedia(notas, qtd));
    free(notas);
    notas = 0;
    return 0;
}