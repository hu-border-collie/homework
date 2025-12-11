#include <stdio.h>
int main()
{
    int n, a[10], b[10], c[10];
    int sum = 0, ping = 0, min = 0;
    scanf("%d", &n);
    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        sum = sum + a[i] + b[i];
        if (a[i] == b[i])
            ping++;
        c[i] = a[i] + b[i];
    }
    min = c[0];
    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        if (c[i] < min)
            min = c[i];
    }
    printf("%d %d %d", sum, ping, min);
    return 0;
}