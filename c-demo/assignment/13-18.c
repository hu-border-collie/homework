#include <stdio.h>
int main()
{
    int n, a[1000] = {0};
    scanf("%d", &n);
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j % i == 0)
            {
                if (a[j - 1] == 0)
                    a[j - 1] = 1;
                else
                    a[j - 1] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            printf("%d ", i + 1);
    }
}