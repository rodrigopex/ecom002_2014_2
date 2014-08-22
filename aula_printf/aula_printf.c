#include <stdio.h>

int main() {
    printf("#%d#\n", 10);
    printf("#%6d#\n", 10);
    printf("#%06d#\n", 10);
    printf("#%+06d#\n", 10);
    
    /*float a = 10.1567;
    a = ((int) (a * 100))/100.0;
    printf("%f\n", a);*/
    
    
    printf("#%f#\n", 10.1567);
    printf("#%.2f#\n", 10.1567);
    printf("#%10.2f#\n", 10.1567);
    printf("#%010.2f#\n", 10.1567);
    printf("#%+010.2f#\n", 10.1567);
    
    
    return 0;
}
