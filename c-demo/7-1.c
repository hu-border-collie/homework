#include <stdio.h>
int main()
{
    int n, max, min;
    static int a[100];
    printf("Input length (N<=100):\n");
    scanf("%d", &n);
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
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("The max is %d\nThe min is %d", max, min);
    return 0;
}