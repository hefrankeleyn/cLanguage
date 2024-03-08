#include <stdio.h>

main()
{
    int c;
    c = getchar() != EOF;
    printf("%d\n", c);
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}