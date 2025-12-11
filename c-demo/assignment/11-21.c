#include <stdio.h>
int main()
{
    int i, a[10];
    int *p;
    p = a;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("after inverse:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *p + 9 - i);
    }
    return 0;
}