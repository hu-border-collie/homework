#include <stdio.h>
int main()
{
    int n, x, t;
    static int a[11];
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d integers:", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter insert integer:");
    scanf("%d", &x);
    for (int i = n; i >= 0; i--)
    {
        t = a[i];
        a[i] = a[i - 1];
        a[i + 1] = t;
        if (x > a[i])
        {
            a[i] = x;
            break;
        }
    }
    for (int i = 0; i <= n; i++)
        printf("%4d", a[i]);
    return 0;
}