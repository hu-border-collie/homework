#include <stdio.h>
int main()
{
    int n, max = 0, min = 0;
    static int a[10];
    printf("Input n:");
    scanf("%d", &n);
    printf("Input %d integers:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
        {
            a[i] = a[0];
            a[0] = min;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max == a[i])
        {
            a[i] = a[n - 1];
            a[n - 1] = max;
            break;
        }
    }
    printf("After swapped:");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
    return 0;
}