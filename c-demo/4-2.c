#include <stdio.h>
int main()
{
    int m, n, a = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        int w = 1;
        while (i >= w)
        {
            w = w * 10;
        }
        if ((i * i) % w == i)
            printf("%d\n", i), a++;
    }
    if (a == 0)
        printf("No Answer");
    return 0;
}