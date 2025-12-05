#include <stdio.h>
int main()
{
    int n, k, t, sum = 0;
    scanf("%d %d", &n, &k);
    sum = n;
    t = n;
    while (t >= k)
    {
        sum = sum + t / k;
        t = t / k + t % k;
    }
    printf("%d", sum);
    return 0;
}