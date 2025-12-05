#include <stdio.h>
int main()
{
    char ch;
    while (ch != '\n')
    {
        ch = getchar();
        if (ch >= 'a' && ch <= 'z')
        {
            printf("%c", ch);
        }
    }
    return 0;
}