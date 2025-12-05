#include <stdio.h>
int main()
{
    int n, e = 0, o = 0;
    float h1 = 0, h2 = 0;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
            break;
        if (n % 2 == 0)
        {
            e++, h1 = h1 + n;
        }
        else
        {
            o++, h2 = h2 + n;
        }
    }
    h1 = h1 / e;
    h2 = h2 / o;
    printf("Number of even:%d;Average of even:%.2f\n", e, h1);
    printf("Number of odd:%d;Average of odd:%.2f\n", o, h2);
    return 0;
}