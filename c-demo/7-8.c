#include <stdio.h>
int main()
{
    int a[5], b[5], c[5];
    int max, min, g;
    double x, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d", &b[i], &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == max)
        {
            a[i] = 0;
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == min)
        {
            a[i] = 0;
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    x = sum / 3;
    printf("%.2lf\n", x);
    for (int i = 0; i < 5; i++)
    {
        c[i] = x - a[i];
        if (c[i] < 0)
        {
            c[i] = -c[i];
        }
    }
    g = c[0];
    for (int i = 0; i < 5; i++)
    {
        if (g > c[i])
        {
            g = c[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (g == c[i])
        {
            printf("%d", b[i]);
            break;
        }
    }

    return 0;
}