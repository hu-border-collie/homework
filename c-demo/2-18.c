#include <stdio.h>
int main()
{
    int n, cnt = 0;
    for (n = 1; n <= 1000; n++)
    {
        if (n % 3 == 1 && n % 5 == 2 && n % 7 == 3)
        {
            printf("%5d", n);
            cnt++;
            if (cnt % 5 == 0)
                putchar('\n');
        }
    }
    if (cnt % 5 != 0)
        putchar('\n');
    return 0;
}