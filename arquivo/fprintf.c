#include <stdio.h>

void func() {
    char nome[100];
    printf("Digite o nome do arquivo:");
    scanf("%[^\n]s", nome);
    FILE *file;
    file = fopen(nome, "a");
    fprintf(file, "Hello World!\n%s\n", nome);
    fclose(file);
}

int main () {
    char nome[100];
    printf("Digite o nome do arquivo a ser lido: ");
    scanf("%[^\n]s", nome);
    FILE *file;
    file = fopen(nome, "r");
    //char content[500];
    
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);
    
    fread(content, sizeof(char), fileSize, file);
    
    printf("%s", content);
    fclose(file);
    return 0;
}