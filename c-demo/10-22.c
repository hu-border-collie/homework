#include <stdio.h>
int comb(int a, int b)
{
    int n;
    n = 1000 * (a % 10);
    a = a / 10;
    n = n + 10 * (a % 10);
    n = n + 100 * (b % 10);
    b = b / 10;
    n = n + b % 10;
    return n;
}

int main()

{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", comb(a, b));
    return 0;
}