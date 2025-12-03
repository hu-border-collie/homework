#include <stdio.h>
int main()
{
    static int a[6][6];
    int n, i, j, t = 0;
    printf("Input n:");
    scanf("%d", &n);
    printf("Input array:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                if (a[i][j] != 0)
                {
                    printf("NO");
                    t = 1;
                    break;
                }
            }
        }
        if (t == 1)
        {
            break;
        }
    }
    if (t == 0)
    {
        printf("YES");
    }
    return 0;
}