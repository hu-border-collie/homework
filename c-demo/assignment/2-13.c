#include <stdio.h>
int main()
{
    int h, m;
    float A;
    scanf("%d:%d", &h, &m);
    if (h > 12)
        h = h - 12;
    A = m * 6 - (h * 30 + m * 0.5);
    if (A < 0)
        A = -A;
    if (A > 180)
        A = 360 - A;
    printf("%.3f", A);
    return 0;
}