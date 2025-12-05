#include <stdio.h>
int main()
{
    int n, i, x = 0;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            x = 1;
            break;
        }
    }
    if (x == 1)
    {
        printf("NO");
    }
    else
        printf("YES");
    return 0;
}