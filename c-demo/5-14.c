#include <stdio.h>
int main()
{
    int m, n = 1;
    scanf("%d", &m);
    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= m; i++)
        {

            printf("%4d", n);
            n++;
            if (i == m)
            {
                printf("\n");
                n = j + 1;
            }
            if (n >= 6)
            {
                n = 1;
            }
        }
    }
    return 0;
}