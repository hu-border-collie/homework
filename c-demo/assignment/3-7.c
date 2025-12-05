#include <stdio.h>
int main()
{
    int n, i = 0, m = 0, t;
    printf("Please input the number:");
    scanf("%d", &n);
    do
    {
        t = n % 10;
        m = m * 10 + t;
        n = n / 10;
        i++;
    } while (n > 0);
    printf("Inversed number is:%d\n", m);
    printf("It has %d bits.\n", i);
    return 0;
}