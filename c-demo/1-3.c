#include <stdio.h>
int main()
{
    int C;
    float F;
    scanf("%d", &C);
    F = C * 9.0 / 5 + 32;
    printf("%.1f", F);
    return 0;
}