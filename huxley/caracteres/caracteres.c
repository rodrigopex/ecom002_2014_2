#include <stdio.h>
#include <string.h>

int main(){
    int qtd = 0;
    scanf("%d", &qtd);
    while(qtd != 0) {
        char palavra[qtd+1];
        scanf("%s", palavra);
        for(int i = strlen(palavra) - 1; i >= 0; i--){
            printf("%c", palavra[i]);
        }
        printf("\n");
        scanf("%d", &qtd);
    }
    return 0;
}