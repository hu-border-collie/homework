#include <stdio.h>
int main()
{
    int L, R, n = 0, t;
    scanf("%d %d", &L, &R);
    t = L;
    for (int i = L; i <= R; i++, t++)
    {
        while (t != 0)
        {
            if (t % 10 == 2)
                n++;
            t = t / 10;
        }
        t = i;
    }
    printf("%d", n);
}