#include <stdio.h>
int main()
{
    printf("请输入圆的半径：");
    int r;
    double s;
    scanf("%d", &r);
    s = r * r * 3.1415926;
    printf("圆的面积为：%.2f", s);
    return 0;
}