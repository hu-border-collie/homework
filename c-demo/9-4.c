#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], cut[50];
    gets(str);
    gets(cut);
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < strlen(cut); j++)
        {
            if (str[i] == cut[j])
            {
                str[i] = '\n';
                if (str[i - 1] == '\n')
                    for (int k = i; k < strlen(str); k++)
                    {
                        str[k] = str[k + 1];
                    }
                i = i - 1;
            }
        }
    }
    puts(str);
    return 0;
}