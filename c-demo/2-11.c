#include <stdio.h>
int main()
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    s = s + 1;
    if (s == 60)
        s = 0, m = m + 1;
    if (m == 60)
        m = 0, h = h + 1;
    if (h == 24)
        h = 0;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}