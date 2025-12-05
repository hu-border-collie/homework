#include <stdio.h>
int main()
{
    int a[5][5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[0][i];
        sum = sum + a[4][i];
        sum = sum + a[i][0];
        sum = sum + a[i][4];
    }
    sum = sum - a[0][0] - a[4][0] - a[0][4] - a[4][4];
    printf("sum=%d", sum);
    return 0;
}