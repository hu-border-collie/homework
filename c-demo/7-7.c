#include <stdio.h>
int main()
{
    double a[12];
    double sum;
    int b[12];
    for (int i = 0; i < 12; i++)
    {
        scanf("%lf", &a[i]);
        sum = sum + a[i];
    }
    for (int i = 0; i < 12; i++)
    {
        b[i] = (a[i] * 100 + sum / 2) / sum;
    }
    for (int i = 0; i < 12; i++)
    {
        printf("%2d(%2d%%) ", i + 1, b[i]);
        for (int j = 0; j < b[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}