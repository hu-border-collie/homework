#include <stdio.h>
#include <string.h>
int main()
{
    char ch[6][6];
    int a[6];
    int i, j, c;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {

            do
            {
                c = getchar();
            } while (c == '\n');
            ch[i][j] = c;
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (ch[i][j] == 'A')
            {
                a[i] = j + 1;
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
