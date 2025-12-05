#include <stdio.h>
int main()
{
    int i, n, n1, n2, n3;
    n1 = 1;
    n2 = 2;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d", n1);
        return 0;
    }
    else if (n == 2)
    {
        printf("%d", n2);
        return 0;
    }
    else
    {
        for (i = 3; i <= n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
    }
    printf("%d", n3);
    return 0;
}