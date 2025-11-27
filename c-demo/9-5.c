#include <stdio.h>
int main()
{
    int x, y;
    static int a[10][10], sum[5];
    char num[10][5] =
        {
            "ling",
            "yi",
            "er",
            "san",
            "si",
            "wu",
            "liu",
            "qi",
            "ba",
            "jiu"};

    scanf("%d %d", &x, &y);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sum[i] = sum[i] + a[2 * i][j];
        }
    }

    for (int i = 0; i < (x + 1) / 2; i++)
    {
        if (sum[i] / 100 != 0)
        {
            printf("%d:%5s%5s%5s\n", sum[i], num[sum[i] / 100], num[(sum[i] % 100) / 10], num[sum[i] % 10]);
        }
        else if (sum[i] / 10 != 0)
        {
            printf("%d:%5s%5s\n", sum[i], num[(sum[i] % 100) / 10], num[sum[i] % 10]);
        }
        else

            printf("%d:%5s\n", sum[i], num[sum[i] % 10]);
    }

    return 0;
}
