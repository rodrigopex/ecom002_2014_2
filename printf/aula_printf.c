#include <stdio.h>

int main() {
    printf("#%d#\n", 10);
    printf("#%6d#\n", 10);
    printf("#%06d#\n", 10);
    printf("#%06d#\n", 10);
    
    printf("Octal: #%06o#\n", 10);
    printf("Hexa: #%06X#\n", 10);
    
    printf("Notação científica: #%06E#\n", 103292.5673);
    printf("Notação científica: #%06e#\n", 103292.5673);
    
    /*float a = 10.1567;
    a = ((int) (a * 100))/100.0;
    printf("%f\n", a);*/
    
    printf("#%c#\n", 97 + 2);
    printf("#%c#\n", 'a' + 2);
    printf("#%6c#\n", 97 + 2);
    printf("#%c#\n", 'a' + 2);
    
    printf("#%f#\n", 10.1567);
    printf("#%.2f#\n", 10.1567);
    printf("#%10.2f#\n", 10.1567);
    printf("#%010.2f#\n", 10.1567);
    printf("#%+010.2f#\n", 10.1567);
    
    printf("#%+010.2lf#\n", (double) 10.1567);
    
    
    printf("Linha: \n");
    printf("Tab #\t#\n");
    printf("Bip #\a#\n");
    printf("ABC\bEDF\n");
    printf("ABCDEF\rGHI   \n");
    printf("10%%\n");
    
    return 0;
}
