#include <stdio.h>
int main()
{
    int n = 0, k = 0;
    char ch[20], num[20];
    if (scanf("%19s", ch) != 1)
    {
        return 0;
    }
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= '0' && ch[i] <= '9')
        {
            num[n++] = ch[i];
        }
        else
        {
            ch[k++] = ch[i];
        }
    }
    ch[k] = '\0';
    num[n] = '\0';

    printf("%s %s", ch, num);
}
