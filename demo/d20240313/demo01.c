#include <stdio.h>

#define IN 1   /* 在单词里面 */
#define OUT 0  /* 在单词外面 */

main()
{
    int c, n1, nw, nc, state;
    state = OUT;
    n1 = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++n1;
            state = OUT;
        } else if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d, %d, %d\n", n1, nw, nc);
}