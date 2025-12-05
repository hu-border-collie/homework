#include <stdio.h>
int fun(int n)
{
    int m = 0;
    for (int i = 1; i <= 10; i++)
    {
        int t = 10;
        m = 10 * m + n % t;
        n = n / t;
        t = t * 10;
        if (n == 0)
        {
            break;
        }
    }
    return m;
}

int main()

{
    int x;
    scanf("%d", &x);
    printf("%d", fun(x));
    return 0;
}