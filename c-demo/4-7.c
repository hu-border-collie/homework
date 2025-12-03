#include <stdio.h>
int main()
{
    int n, j = 1;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; i++)
    {
        if (i == 0 || i == j - 1 || i == n - 1 || i == j + n - 2 || i == 2 * n - 2)
        {
            printf("@");
        }
        else
            printf(" ");
        if (i == 2 * n - 2)
        {
            printf("\n");
            i = -1;
            j++;
        }
        if (j == n + 1)
        {
            break;
        }
    }
    return 0;
}