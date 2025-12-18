#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    int max = 0, a[26] = {0};
    scanf("%s", ch);
    for (int i = 0; i <= strlen(ch); i++)
    {
        if (max < ch[i])
            max = ch[i];
    }
    for (int i = 0; i <= strlen(ch); i++)
    {
        if (ch[i] == max)
            for (int j = i; j <= strlen(ch); j++)
                ch[j] = ch[j + 1];
    }
    puts(ch);
    for (int i = 0; i <= strlen(ch); i++)
    {
        for (int j = 0; j <= strlen(ch); j++)
        {
            if (ch[i] == 65 + j || ch[i] == 97 + j)
                a[j]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0)
            printf("%c:%d\n", 65 + i, a[i]);
    }
}