#include <stdio.h>
int main()
{
    int n, g, s, b, q, w;
    scanf("%d", &n);
    g = n % 10;
    s = n % 100;
    s = s / 10;
    b = n % 1000;
    b = b / 100;
    q = n % 10000;
    q = q / 1000;
    w = n % 100000;
    w = w / 10000;
    printf("%d%d%d%d%d", g, s, b, q, w);
    return 0;
}