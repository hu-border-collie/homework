#include <stdio.h>
int main()
{
    int apple[10], taotao, apple_n = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &apple[i]);
    }
    scanf("%d", &taotao);
    for (int i = 0; i < 10; i++)
    {
        if (apple[i] <= taotao + 30)
        {
            apple_n++;
        }
    }
    printf("%d", apple_n);
}