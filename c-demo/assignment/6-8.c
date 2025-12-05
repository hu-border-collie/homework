#include <stdio.h>
int main()
{
    int in, out;
    double sell, sell_all, max;
    static double a[50];
    scanf("%d %d", &in, &out);
    for (int i = 0;; i++)
    {
        sell = (1 - 0.01 * i) * out;
        if (sell < in)
        {
            break;
        }
        sell_all = (sell - in) * i;
        a[i] = sell_all;
    }
    max = a[0];
    for (int i = 0; i < 50; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (int i = 0; i < 50; i++)
    {
        if (max == a[i])
        {
            printf("%d:", i);
        }
    }
    printf("%.2lf", max);
    return 0;
}