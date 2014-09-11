#include <stdio.h>
#include <string.h>

int length(char * str) {
    int i;
    for(i = 0; str[i] != '\0'; ++i);
    return i;
}

void upperX(char * str) {
    char * end = str + strlen(str);
    char * curr;
    for(curr = str; curr != end; curr++) {
        if(97 <= *curr && *curr <= 122) {
            *curr = *curr - 32;
        }
    }
}


void upper(char * str) {
    int i;
    for(i = 0; str[i] != '\0'; ++i) {
        if(97 <= str[i] && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
}

void lower(char * str) {
    int i;
    for(i = 0; str[i] != '\0'; ++i) {
        if(65 <= str[i] && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
}

int main () {
    char m[] = "Hello world!$%^"; 
    char x[] = {'H', 'e', 'l', 'l', 'o', 0};
    
    int a = 1589352;
    char tmp[50];
    sprintf(tmp,"%d",a);
    printf("Digits a: %ld\n", strlen(tmp));
    
    int digits = 1;
    a = a / 10;
    while(a > 0) {
        a = a / 10;
        digits++;
    }
    printf("Digits: %d\n", digits);
    
    char *b = m;
    char *t = b + 6;
    printf("t = %s\n\n", t);
    printf("m = %p\n", m);
    printf("m[0] = %p\n", &m[0]);
    printf("b = %p\n", b);
    
    printf("Tamanho da string X: %d\n", length(b));
    printf("Tamanho da string: %d\n", length(b));
    printf("Tamanho da string: %ld\n", strlen(b));
    upper(m);
    printf("UPPER: %s\n", b);
    lower(m);
    printf("lower: %s\n", m);
    return 0;
}