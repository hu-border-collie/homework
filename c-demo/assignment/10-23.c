#include <stdio.h>
int judge(int n, int m)
{
    int t = 0;
    while (n != 0)
    {
        if (n % 10 == m)
        {
            t = 1;
            break;
        }
        n = n / 10;
    }
    return t;
}
int del(int n, int m)
{
    int i = 1, x, y;
    x = n;
    while (n != 0)
    {
        if (n % 10 == m)
        {
            y = n / 10;
            break;
        }
        n = n / 10;
        i = i * 10;
    }
    y = y * i + x % i;
    return y;
}
int main()

{
    int n, m, k;
    double b;
    scanf("%d %d", &n, &m);
    if (judge(n, m) == 0)
    {
        printf("%d不存在于%d中", m, n);
        return 0;
    }
    k = del(n, m);
    b = 1.0 * n / k;
    printf("%d,%.2lf", k, b);
    return 0;
}