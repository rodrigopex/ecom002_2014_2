#include <stdio.h>

int div5(int x) {
    return !(x % 5);
}

void div5Ate100() {
    for(int x = 0; x <= 100; ++x) {
        if(x < 30) {
            continue;
        }
        if(div5(x)) {
            printf("%d\n", x);
        }
        if(x == 50) {
            break;
        }
    }
}

void pares() {
    for(int x = 0; x <= 100; x = x + 2) {
        printf("%d\n", x);
    }
}

int main() {
    /*int x = 0;

back:
    if(x < 10) {
        printf("%d\n", x);
        x++; // x = x + 1;
        goto back;
    }
  
    x = 0;
    while(x < 10) {
        printf("%d\n", x);
        x++;
    }
    
    for(x = 0; x < 10; x++) {
        printf("%d\n", x);
    }
    
    for(int z = 10, y = 0; y < 10 && z > 0; y++, z--) {
        printf("%d, %d\n", y, z);
    }
    pares();*/
    div5Ate100();
    return 0;
}