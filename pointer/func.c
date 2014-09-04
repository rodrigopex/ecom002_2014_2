#include <stdio.h>

void inc(int *a) {
    *a = *a + 1;
}

int main() {
    int b = 1;
    inc(&b);
    printf("%d\n", b);
    return 0;
}