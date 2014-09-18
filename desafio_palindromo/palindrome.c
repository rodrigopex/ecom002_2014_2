#include <stdio.h>
#include <string.h>

void testPalindromePtr() {
    char isPalindrome = 1;
    char palavra[50];
    scanf("%s", palavra);
    char * curr = palavra;
    char * end  = palavra + strlen(palavra) - 1;
    for(; curr < end; ++curr, --end) {
        printf("%c %c\n", *curr, *end);
        if(*curr != *end) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome) {
        printf("É palídromo!\n");
    } else {
        printf("Não é palídromo!\n");
    }
}

void testPalindrome() {
    char isPalindrome = 1;
    char palavra[50];
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for(int i = 0, j = tamanho - 1; i < tamanho && j >= 0; ++i, --j) {
        printf("%c %c\n", palavra[i], palavra[j]);
        if(palavra[i] != palavra[j]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome) {
        printf("É palídromo!\n");
    } else {
        printf("Não é palídromo!\n");
    }
}

int main () {
//    testPalindrome();
    testPalindromePtr();
    return 0;
}