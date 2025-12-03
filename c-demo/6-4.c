#include <stdio.h>
int main()
{
    int n, m, a;
    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;
        printf("-");
    }
    m = n;
    if (n == 0)
    {
        printf("0");
    }
    else
        for (int i = 1;; i++)
        {
            a = m % 10;
            if (a > 0)
            {
                printf("%d", 2 * a);
            }
            m = m / 10;
            if (m == 0)
                break;
        }
    return 0;
}