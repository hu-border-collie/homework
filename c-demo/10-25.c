#include <stdio.h>
#include <string.h>
int change(char ch[])
{
    int n = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= '0' && ch[i] <= '9')
        {
            n = n * 10 + (ch[i] - '0');
        }
    }
    return n;
}
int main()
{
    char ch[80];
    printf("Enter a string:");
    scanf("%79s", ch);
    printf("digit=%d,%d", change(ch), 2 * change(ch));
}