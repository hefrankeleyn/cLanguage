#include <stdio.h>

main()
{
    int prec , c;
    prec = '-1';
    while ((c = getchar()) != EOF) {
        if (prec != ' ' || c != ' ') {
            putchar(c);
            prec = c;
        }
    }
}