#include <stdio.h>
int absolute(int x)
{
    int m = 0, n, t, t1 = 1, t2 = 1;
    n = x;
    while (n != 0)
    {
        int s = 10;
        m = 10 * m + n % s;
        n = n / 10;
        s = s * 10;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            t1 = 0;
            break;
        }
    }
    for (int i = 2; i * i <= m; i++)
    {
        if (m % i == 0)
        {
            t2 = 0;
            break;
        }
    }
    if (t1 == 1 && t2 == 1)
        t = 1;
    else
        t = 0;
    return t;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (absolute(i) == 1)
            printf("%d\n", i);
    }
    return 0;
}