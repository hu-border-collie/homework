#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, t = 0;
    static int ABC_n[26];
    char ch[100], ABC[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    gets(ch);
    for (i = 0; i <= strlen(ch); i++)
    {
        for (j = 0; j < 26; j++)
            if (ch[i] == ABC[j])
            {
                ABC_n[j]++;
            }
    }
    for (i = 0; i < 26; i++)
    {
        if (ABC_n[i] != 0)
        {
            printf("%c:%d\n", ABC[i], ABC_n[i]);
            t++;
        }
    }
    if (t == 0)
    {
        printf("None");
    }
    return 0;
}