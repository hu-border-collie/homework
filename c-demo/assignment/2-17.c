#include <stdio.h>
int main()
{
    int n, i, m;
    scanf("%d", &n);
    double in, out;
    in = n * 100000;
    m = 1;
    for (i = 0; i < n; i++)
    {
        m = m * 2;
    }
    out = 0.01 * m;
    printf("%.0f\n%.0f", in, out);
    return 0;
}