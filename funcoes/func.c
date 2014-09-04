#include <stdio.h>

int test(int a, float y) {
    return a + 1 + y;
}

int main() {
    int b = 1;
    test(b, b); // --> test(a = 1, y = 1.0)
    printf("%d\n", b);
    return 0;
}