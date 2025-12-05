#include <stdio.h>
int main()
{
    int x, y, h, c, j, s, u;
    scanf("%d %d", &x, &y);
    h = x + y;
    c = x - y;
    j = x * y;
    s = x / y;
    u = x % y;
    printf("he=%d\ncha=%d\nji=%d\nshang=%d\nyushu=%d\n", h, c, j, s, u);
    return 0;
}