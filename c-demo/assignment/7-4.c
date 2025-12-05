#include <stdio.h>
int main()
{
    int a[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n, sum = 0, x = 0;
    scanf("%d", &n);
    for (int i = 0; i < 4; i++)
    {
        x = n % 10;
        n = n / 10;
        sum = sum + a[x];
        if (n == 0)
            break;
    }
    printf("%d", sum);
    return 0;
}