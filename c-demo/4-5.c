#include <stdio.h>
int main()
{
    int a, n, h = 0, s = 0;
    printf("Input a&n:");
    scanf("%d %d", &a, &n);
    for (int i = 1; i <= n; i++)
    {
        s = s * 10 + 1;
        h = h + a * s;
    }
    printf("s=%d", h);
    return 0;
}