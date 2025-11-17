#include <stdio.h>
int main()
{
    int n, max, t;
    static int a[100], b[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                b[i]++;
            }
        }
    }
    max = b[0];
    for (int i = 0; i < n; i++)
    {
        if (max < b[i])
        {
            max = b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            a[i] = 0;
            b[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max == b[i])
        {
            printf("%d %d\n", a[i], b[i]);
        }
    }
    return 0;
}