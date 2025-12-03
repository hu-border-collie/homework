#include <stdio.h>
int main()
{
    int a, b, n1, n2, temp;
    printf("Input m,n:");
    scanf("%d %d", &n1, &n2);
    while (n1 < 1 || n2 < 1)
    {
        printf("Input again!\n");
        scanf("%d %d", &n1, &n2);
    }
    a = n1;
    b = n2;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("%d和%d的最大公约数:%d\n", n1, n2, a);
    printf("%d和%d的最小公倍数:%d\n", n1, n2, n1 * n2 / a);
    return 0;
}