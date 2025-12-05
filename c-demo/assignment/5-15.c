#include <stdio.h>
int main()
{
    int n, m, a = 0;
    m = n;
    printf("Input an integer:");
    scanf("%d", &n);
    printf("%d=", n);
    for (int i = 2; i <= n; i++)
        if (n % i == 0)
        {
            if (a != 0)
            {
                printf("*");
            }
            n = n / i;
            printf("%d", i);
            a++;
            m = n;
            if (m % i == 0)
            {
                printf("*");
                a++;
                printf("%d", i);
            }
        }
    return 0;
}