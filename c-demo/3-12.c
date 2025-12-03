#include <stdio.h>
int main()
{
    int n, i, m = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        m = m * i;
    }
    printf("%d!=%d", n, m);
    return 0;
}