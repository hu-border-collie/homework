#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int t = 1;
    printf("Enter a string:");
    gets(ch);
    for (int i = 0; i < 100; i++)
    {
        if (ch[i] == ' ')
        {
            if (ch[i + 1] != ' ')
                t++;
            if (ch[i + 1] == ' ')
                continue;
        }
    }
    printf("%d", t);
    return 0;
}