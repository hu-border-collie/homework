#include <stdio.h>
int main()
{
    int n1, n2, x = 0, t;
    static int a[20], b[20], c[20];
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                c[x] = a[i];
                x++;
            }
        }
    }
    for (int i = 1; i < x; i++)
    {
        for (int j = 0; j < x - 1; j++)
        {
            if (c[j] < c[j + 1])
            {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        printf("%6d", c[i]);
    }
    return 0;
}