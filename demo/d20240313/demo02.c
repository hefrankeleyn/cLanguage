#include <stdio.h>

#define IN 1   /* 在单词里面 */
#define OUT 0  /* 在单词外面 */

main()
{
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
        } else {
            state = IN;
            putchar(c);
        }
    }
}