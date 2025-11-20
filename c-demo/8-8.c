#include <stdio.h>
int main()
{
    int n, r;
    static int a[10];
    int top = 0; /* highest filled index */
    char ch[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    scanf("%d %d", &n, &r);
    for (int i = 0; i < 10; i++)
    {
        a[i] = n % r;
        n = n / r;
        top = i;
        if (n == 0)
        {
            break;
        }
    }
    for (int i = top; i >= 0; i--)
    {
        if (0 <= a[i] && a[i] <= 9)
        {
            printf("%d", a[i]);
        }
        if (a[i] >= 10 && a[i] < 16)
        {
            printf("%c", ch[a[i] - 10]);
        }
    }

    return 0;
}
