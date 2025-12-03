#include <stdio.h>
int main()
{
    int h, r, n;
    float v;
    scanf("%d %d", &h, &r);
    v = r * r * 3.14 * h;
    n = 20000 / v;
    n = n + 1;
    printf("%d", n);
    return 0;
}