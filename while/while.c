#include <stdio.h>

int main() {
    int x = 0;

back:
    if(x < 10) {
        printf("%d\n", x);
        x++;
        goto back;
    }
  
    x = 0;
    while(x < 10) {
        printf("%d\n", x);
        ++x;
    }
    
    for(x = 0; x < 10; x++) {
        printf("%d\n", x);
    }
    
    
    for(int z = 10, y = 0; y < 10 && z > 0; y++, z--) {
        printf("%d, %d\n", y, z);
    }
    return 0;
}