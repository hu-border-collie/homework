#include <stdio.h>
int main()
{
    int n, m, a = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        m = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                m = m + j;
            }
        }
        if (m == i)
        {
            printf("%d\n", m);
            a++;
        }
    }
    if (a == 0)
    {
        printf("没有完数");
    }
    return 0;
}