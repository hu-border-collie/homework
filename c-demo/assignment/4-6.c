#include <stdio.h>
int main()
{
    int n;
    double x;
    scanf("%lf%d", &x, &n);
    double sum = 0.0;
    double term = x;
    sum += term;
    for (int i = 1; i < n; i++)
    {
        term *= -(x * x) / ((2.0 * i) * (2.0 * i + 1.0));
        sum += term;
    }
    printf("%.8lf", sum);
    return 0;
}